/**
 * Used for acoustic GUI notifications.
 * Define the soundfile paths and specific time thresholds (avoid spam).
 * And store the timestamp of last interaction for each notification.
 */
var g_SoundNotifications = {
	"nick": { "soundfile": "audio/interface/ui/chat_alert.ogg", "threshold": 3000 }
};

/**
 * Locale language used for string comparisons.
 */
var g_Localization = Engine.ConfigDB_GetValue("user", "locale").replace("_", "-") || "en-GB";

/**
 * Save setting for current instance and write setting to the user config file.
 */
function saveSettingAndWriteToUserConfig(setting, value)
{
	Engine.ConfigDB_CreateValue("user", setting, value);
	Engine.ConfigDB_WriteValueToFile("user", setting, value, "config/user.cfg");
}

/**
 * Used to track previous texts from autocompletion to try next autocompletion if multiples apply.
 */
var g_LastAutoComplete = {
	"bufferPosition": 0,
	"text": "",
	"tries": 0,
	"newText": ""
};

/**
 * Returns translated history and gameplay data of all civs, optionally including a mock gaia civ.
 */
function loadCivData(selectableOnly, gaia)
{
	let civData = loadCivFiles(selectableOnly);

	translateObjectKeys(civData, ["Name", "Description", "History", "Special"]);

	if (gaia)
		civData.gaia = { "Code": "gaia", "Name": translate("Gaia") };

	return deepfreeze(civData);
}

// A sorting function for arrays of objects with 'name' properties, ignoring case
function sortNameIgnoreCase(x, y)
{
	let lowerX = x.name.toLowerCase();
	let lowerY = y.name.toLowerCase();

	if (lowerX < lowerY)
		return -1;
	if (lowerX > lowerY)
		return 1;
	return 0;
}

/**
 * Escape tag start and escape characters, so users cannot use special formatting.
 * Also limit string length to 256 characters (not counting escape characters).
 */
function escapeText(text, limitLength = true)
{
	if (!text)
		return text;

	if (limitLength)
		text = text.substr(0, 255);

	return text.replace(/\\/g, "\\\\").replace(/\[/g, "\\[");
}

function unescapeText(text)
{
	if (!text)
		return text;
	return text.replace(/\\\\/g, "\\").replace(/\\\[/g, "\[");
}

/**
 * Merge players by team to remove duplicate Team entries, thus reducing the packet size of the lobby report.
 */
function playerDataToStringifiedTeamList(playerData)
{
	let teamList = {};

	for (let pData of playerData)
	{
		let team = pData.Team === undefined ? -1 : pData.Team;
		if (!teamList[team])
			teamList[team] = [];
		teamList[team].push(pData);
		delete teamList[team].Team;
	}

	return escapeText(JSON.stringify(teamList), false);
}

function stringifiedTeamListToPlayerData(stringifiedTeamList)
{
	let teamList = JSON.parse(unescapeText(stringifiedTeamList));
	let playerData = [];

	for (let team in teamList)
		for (let pData of teamList[team])
		{
			pData.Team = team;
			playerData.push(pData);
		}

	return playerData;
}

function translateMapTitle(mapTitle)
{
	return mapTitle == "random" ? translateWithContext("map selection", "Random") : translate(mapTitle);
}

function removeDupes(array)
{
	// loop backwards to make splice operations cheaper
	let i = array.length;
	while (i--)
		if (array.indexOf(array[i]) != i)
			array.splice(i, 1);
}

function singleplayerName()
{
	return Engine.ConfigDB_GetValue("user", "playername.singleplayer") || Engine.GetSystemUsername();
}

function multiplayerName()
{
	return Engine.ConfigDB_GetValue("user", "playername.multiplayer") || Engine.GetSystemUsername();
}

function tryAutoComplete(text, autoCompleteList, tries)
{
	if (!text.length)
		return text;

	var wordSplit = text.split(/\s/g);
	if (!wordSplit.length)
		return text;

	var lastWord = wordSplit.pop();
	if (!lastWord.length)
		return text;

	let firstFound = "";
	for (var word of autoCompleteList)
	{
		if (word.toLowerCase().indexOf(lastWord.toLowerCase()) != 0)
			continue;

		--tries;
		if (!firstFound)
			firstFound = word;

		if (tries < 0)
			break;
	}

	if (!firstFound)
		return text;

	// Wrap search to start, cause tries could not complete to 0, means there are no more matches as tries in list.
	if (tries >= 0)
	{
		g_LastAutoComplete.tries = 1;
		word = firstFound;
	}

	text = wordSplit.join(" ");
	if (text.length > 0)
		text += " ";

	return text + word;
}

function autoCompleteNick(guiObject, playernames)
{
	let text = guiObject.caption;
	if (!text.length)
		return;

	let bufferPosition = guiObject.buffer_position;
	let sameTry = g_LastAutoComplete.newText == text;
	if (!sameTry)
	{
		g_LastAutoComplete.bufferPosition = bufferPosition;
		g_LastAutoComplete.text = text;
		g_LastAutoComplete.newText = "";
		g_LastAutoComplete.tries = 0;
	}

	let textTillBufferPosition = sameTry ? g_LastAutoComplete.text.substring(0, g_LastAutoComplete.bufferPosition) : text.substring(0, bufferPosition);
	let newText = tryAutoComplete(textTillBufferPosition, playernames, g_LastAutoComplete.tries++);

	guiObject.caption = newText + (sameTry ? g_LastAutoComplete.text.substring(g_LastAutoComplete.bufferPosition) : text.substring(bufferPosition));
	if (g_LastAutoComplete.newText == "" || sameTry)
		g_LastAutoComplete.newText = guiObject.caption;
	guiObject.buffer_position = (sameTry ? g_LastAutoComplete.bufferPosition : bufferPosition) + (newText.length - textTillBufferPosition.length);
	return;
}

function clearChatMessages()
{
	g_ChatMessages.length = 0;
	Engine.GetGUIObjectByName("chatText").caption = "";

	try {
		for (let timer of g_ChatTimers)
			clearTimeout(timer);
		g_ChatTimers.length = 0;
	} catch (e) {
	}
}

/**
 * Manage acoustic GUI notifications.
 *
 * @param {string} type - Notification type.
 */
function soundNotification(type)
{
	if (Engine.ConfigDB_GetValue("user", "sound.notify." + type) != "true")
		return;

	let notificationType = g_SoundNotifications[type];
	let timeNow = Date.now();

	if (!notificationType.lastInteractionTime || timeNow > notificationType.lastInteractionTime + notificationType.threshold)
		Engine.PlayUISound(notificationType.soundfile, false);

	notificationType.lastInteractionTime = timeNow;
}

/**
 * Horizontally spaces objects within a parent
 *
 * @param margin The gap, in px, between the objects
 */
function horizontallySpaceObjects(parentName, margin = 0)
{
	let objects = Engine.GetGUIObjectByName(parentName).children;
	for (let i = 0; i < objects.length; ++i)
	{
		let size = objects[i].size;
		let width = size.right - size.left;
		size.left = i * (width + margin) + margin;
		size.right = (i + 1) * (width + margin);
		objects[i].size = size;
	}
}

/**
 * Hide all children after a certain index
 */
function hideRemaining(parentName, start = 0)
{
	let objects = Engine.GetGUIObjectByName(parentName).children;

	for (let i = start; i < objects.length; ++i)
		objects[i].hidden = true;
}

/**
 * Initialize GUI list sort.
 * 
 * @param {string} guiList - Name of GUI List object
 * @param {string} config - User config setting name
 * @returns {array} - column sort array
 */
function initGUIListSort(guiList, config)
{
	let columnOrder = Engine.ConfigDB_GetValue("user", config).split(",").map(key => {
		let [name, order] = key.split(":");
		return { "name": name, "order": +order };
	});

	let guiObj = Engine.GetGUIObjectByName(guiList);

	guiObj.selected_column_order = columnOrder[0].order;
	guiObj.selected_column = columnOrder[0].name;

	return columnOrder;
}

/**
 * Change order of sorts array and sort order.
 * 
 * @param {obj} guiListObj - GUI list object
 * @param {array} sorts - Sorts array
 */
function changeGUIListSort(guiListObj, sorts, config)
{
	let columnName = guiListObj.selected_column;
	let sortsIndex = sorts.findIndex(sort => sort.name == columnName);

	if (sortsIndex > 0)
		guiListObj.selected_column_order = sorts[sortsIndex].order;

	if (sortsIndex > -1)
		sorts.splice(sortsIndex, 1);

	sorts.unshift({ "name": columnName, "order": guiListObj.selected_column_order });

	saveSettingAndWriteToUserConfig(config, sorts.map(sort => sort.name + ":" + sort.order).join(","));
}

/**
 * Compare two objects a and b by an attribute. Also mind language localization if strings are compared.
 * 
 * @param {obj} objA - Object A
 * @param {obj} objB - Object B
 * @param {string} attribute - Attribute of object a and b to compare.
 * @param {obj} attributeTranslation - Attributes translation object
 * @param {number} order - Sorting order
 */
function cmpObjs(objA, objB, attribute, attributeTranslation, order)
{
	let cmp = attributeTranslation[attribute] ? obj => attributeTranslation[attribute](obj) : obj[attribute] || 0;

	let cmpA = cmp(objA);
	let cmpB = cmp(objB);

	if (typeof cmpA == "string" && typeof cmpB == "string")
		return order * cmpA.localeCompare(cmpB, g_Localization);
		// warn(cmpA + " " + objA.name + "|" + cmpB + " " + objB.name)
	if (cmpA < cmpB)
		return -order;

	if (cmpA > cmpB)
		return +order;

	return 0;
}
