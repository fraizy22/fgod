/**
 * Creates the data for restoring selection, order and filters when returning to the replay menu.
 */
function createReplaySelectionData(selectedDirectory)
{
	let replaySelection = Engine.GetGUIObjectByName("replaySelection");
	let dateTimeFilter = Engine.GetGUIObjectByName("dateTimeFilter");
	let playersFilter = Engine.GetGUIObjectByName("playersFilter");
	let mapNameFilter = Engine.GetGUIObjectByName("mapNameFilter");
	let mapSizeFilter = Engine.GetGUIObjectByName("mapSizeFilter");
	let populationFilter = Engine.GetGUIObjectByName("populationFilter");
	let durationFilter = Engine.GetGUIObjectByName("durationFilter");
	let compatibilityFilter = Engine.GetGUIObjectByName("compatibilityFilter");
	let singleplayerFilter = Engine.GetGUIObjectByName("singleplayerFilter");
	let victoryConFilter = Engine.GetGUIObjectByName("victoryConditionFilter");
	let ratedGamesFilter = Engine.GetGUIObjectByName("ratedGamesFilter");

	return {
		"directory": selectedDirectory,
		"column": replaySelection.selected_column,
		"columnOrder": replaySelection.selected_column_order,
		"filters": {
			"date": dateTimeFilter.list_data[dateTimeFilter.selected],
			"playernames": playersFilter.caption,
			"mapName": mapNameFilter.list_data[mapNameFilter.selected],
			"mapSize": mapSizeFilter.list_data[mapSizeFilter.selected],
			"popCap": populationFilter.list_data[populationFilter.selected],
			"duration": durationFilter.list_data[durationFilter.selected],
			"compatibility": compatibilityFilter.checked,
			"singleplayer": singleplayerFilter.list_data[singleplayerFilter.selected],
			"victoryCondition": victoryConFilter.list_data[victoryConFilter.selected],
			"ratedGames": ratedGamesFilter.selected
		}
	};
}

/**
 * Starts the selected visual replay, or shows an error message in case of incompatibility.
 */
function startReplay()
{
	var selected = Engine.GetGUIObjectByName("replaySelection").selected;
	if (selected == -1)
		return;

	var replay = g_ReplaysFiltered[selected];
	if (isReplayCompatible(replay))
		reallyStartVisualReplay(replay.directory);
	else
		displayReplayCompatibilityError(replay);
}

function reallyStartVisualReplay(replayDirectory)
{
	if (g_InGame)
		messageBox(
			400, 200,
			translate("Do you want to end current game and start replay?"),
			translate("Confirmation"),
			[translate("No"), translate("Yes")],
			[null, () => reallyReallyStartVisualReplay(replayDirectory)]
		);
	else
		reallyReallyStartVisualReplay(replayDirectory);
}

/**
 * Attempts the visual replay, regardless of the compatibility.
 *
 * @param replayDirectory {string}
 */
function reallyReallyStartVisualReplay(replayDirectory)
{
	// if (g_InGame)
	// 	Engine.EndGame();

	let pageSettings = [ "page_loading.xml", {
		"attribs": Engine.GetReplayAttributes(replayDirectory),
		"playerAssignments": {
			"local": {
				"name": singleplayerName(),
				"player": -1
			}
		},
		"savedGUIData": "",
		"isReplay": true,
		"replaySelectionData": createReplaySelectionData(replayDirectory)
	} ];

	if (g_Dialog)
	{
		Engine.PopGuiPageCB({ "page": pageSettings, "replayDirectory": replayDirectory });
	}
	else
	{
		if (!Engine.StartVisualReplay(replayDirectory))
		{
			warn('Replay "' + escapeText(Engine.GetReplayDirectoryName(replayDirectory)) + '" not found! Please click on reload cache.');
			return;
		}
		Engine.SwitchGuiPage(...pageSettings);
	}
}

/**
 * Shows an error message stating why the replay is not compatible.
 *
 * @param replay {Object}
 */
function displayReplayCompatibilityError(replay)
{
	var errMsg;
	if (replayHasSameEngineVersion(replay))
	{
		let gameMods = replay.attribs.mods || [];
		errMsg = translate("This replay needs a different sequence of mods:") + "\n" +
			comparedModsString(gameMods, g_EngineInfo.mods);
	}
	else
	{
		errMsg = translate("This replay is not compatible with your version of the game!") + "\n";
		errMsg += sprintf(translate("Your version: %(version)s"), { "version": g_EngineInfo.engine_version }) + "\n";
		errMsg += sprintf(translate("Required version: %(version)s"), { "version": replay.attribs.engine_version });
	}

	messageBox(500, 200, errMsg, translate("Incompatible replay"));
}

/**
 * Opens the summary screen of the given replay, if its data was found in that directory.
 */
function showReplaySummary()
{
	var selected = Engine.GetGUIObjectByName("replaySelection").selected;
	if (selected == -1)
		return;

	// Load summary screen data from the selected replay directory
	let simData = Engine.GetReplayMetadata(g_ReplaysFiltered[selected].directory);

	if (!simData)
	{
		messageBox(500, 200, translate("No summary data available."), translate("Error"));
		return;
	}
// <<<<<<< HEAD
		
	function nextSummary(index, direction)
	{
		let nextIdx = index;
		do
		{
			nextIdx += direction;
			if (nextIdx >= g_ReplaysFiltered.length || nextIdx < 0)
				return -1;
			if (Engine.HasReplayMetadata(g_ReplaysFiltered[nextIdx].directory))
				break;
		} while (true);
		return nextIdx;
	}

	// Engine.SwitchGuiPage("page_summary.xml", {
// =======
	let pageSettings = {
// >>>>>>> @{-1}
		"sim": simData,
		"gui": {
			"dialog": false,
			"isReplay": true,
			"isInLobby": Engine.HasXmppClient(),
			"ingame": g_InGame,
			"replayDirectory": g_ReplaysFiltered[selected].directory,
			"replaySelectionData": createReplaySelectionData(g_ReplaysFiltered[selected].directory),
			"next": nextSummary(selected, 1),
			"previous": nextSummary(selected, -1)
		},
		"selectedData": g_SummarySelectedData,
		"callback": g_Dialog && "callbackSummary"
	};

	if (g_Dialog)
	{
		pageSettings.gui.dialog = true;
		Engine.PushGuiPage("page_summary.xml", pageSettings);
	}
	else
		Engine.SwitchGuiPage("page_summary.xml", pageSettings);
}

function reloadCache()
{
	let selected = Engine.GetGUIObjectByName("replaySelection").selected;
	loadReplays(selected > -1 ? createReplaySelectionData(g_ReplaysFiltered[selected].directory) : "", true);
}

function close()
{
	if (g_Dialog)
		Engine.PopGuiPage();
	else
		Engine.SwitchGuiPage("page_pregame.xml");
}

/**
 * Callback.
 */
function deleteReplayButtonPressed()
{
	if (!Engine.GetGUIObjectByName("deleteReplayButton").enabled)
		return;

	if (Engine.HotkeyIsPressed("session.savedgames.noconfirmation"))
		deleteReplayWithoutConfirmation();
	else
		deleteReplay();
}
/**
 * Shows a confirmation dialog and deletes the selected replay from the disk in case.
 */
function deleteReplay()
{
	// Get selected replay
	var selected = Engine.GetGUIObjectByName("replaySelection").selected;
	if (selected == -1)
		return;

	var replay = g_ReplaysFiltered[selected];

	messageBox(
		500, 200,
		translate("Are you sure you want to delete this replay permanently?") + "\n" +
			escapeText(Engine.GetReplayDirectoryName(replay.directory)),
		translate("Delete replay"),
		[translate("No"), translate("Yes")],
		[null, function() { reallyDeleteReplay(replay.directory); }]
	);
}

/**
 * Attempts to delete the selected replay from the disk.
 */
function deleteReplayWithoutConfirmation()
{
	var selected = Engine.GetGUIObjectByName("replaySelection").selected;
	if (selected > -1)
		reallyDeleteReplay(g_ReplaysFiltered[selected].directory);
}

/**
 * Attempts to delete the given replay directory from the disk.
 *
 * @param replayDirectory {string}
 */
function reallyDeleteReplay(replayDirectory)
{
	var replaySelection = Engine.GetGUIObjectByName("replaySelection");
	var selectedIndex = replaySelection.selected;

	if (!Engine.DeleteReplay(replayDirectory))
		error("Could not delete replay!");

	// Refresh replay list
	init();

	replaySelection.selected = Math.min(selectedIndex, g_ReplaysFiltered.length - 1);
}
