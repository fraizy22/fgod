/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include "precompiled.h"
#include "lib/external_libraries/libsdl.h"
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>

bool suite_TestComponentManager_init = false;
#include "/mnt/home/fpre/0ad/source/simulation2/tests/test_ComponentManager.h"

static TestComponentManager suite_TestComponentManager;

static CxxTest::List Tests_TestComponentManager = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestComponentManager( "../../../source/simulation2/tests/test_ComponentManager.h", 41, "TestComponentManager", suite_TestComponentManager, Tests_TestComponentManager );

static class TestDescription_suite_TestComponentManager_test_Load : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_Load() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 59, "test_Load" ) {}
 void runTest() { suite_TestComponentManager.test_Load(); }
} testDescription_suite_TestComponentManager_test_Load;

static class TestDescription_suite_TestComponentManager_test_LookupCID : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_LookupCID() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 66, "test_LookupCID" ) {}
 void runTest() { suite_TestComponentManager.test_LookupCID(); }
} testDescription_suite_TestComponentManager_test_LookupCID;

static class TestDescription_suite_TestComponentManager_test_AllocateNewEntity : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_AllocateNewEntity() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 76, "test_AllocateNewEntity" ) {}
 void runTest() { suite_TestComponentManager.test_AllocateNewEntity(); }
} testDescription_suite_TestComponentManager_test_AllocateNewEntity;

static class TestDescription_suite_TestComponentManager_test_rng : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_rng() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 99, "test_rng" ) {}
 void runTest() { suite_TestComponentManager.test_rng(); }
} testDescription_suite_TestComponentManager_test_rng;

static class TestDescription_suite_TestComponentManager_test_AddComponent_errors : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_AddComponent_errors() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 125, "test_AddComponent_errors" ) {}
 void runTest() { suite_TestComponentManager.test_AddComponent_errors(); }
} testDescription_suite_TestComponentManager_test_AddComponent_errors;

static class TestDescription_suite_TestComponentManager_test_QueryInterface : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_QueryInterface() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 148, "test_QueryInterface" ) {}
 void runTest() { suite_TestComponentManager.test_QueryInterface(); }
} testDescription_suite_TestComponentManager_test_QueryInterface;

static class TestDescription_suite_TestComponentManager_test_SendMessage : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_SendMessage() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 173, "test_SendMessage" ) {}
 void runTest() { suite_TestComponentManager.test_SendMessage(); }
} testDescription_suite_TestComponentManager_test_SendMessage;

static class TestDescription_suite_TestComponentManager_test_ParamNode : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_ParamNode() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 247, "test_ParamNode" ) {}
 void runTest() { suite_TestComponentManager.test_ParamNode(); }
} testDescription_suite_TestComponentManager_test_ParamNode;

static class TestDescription_suite_TestComponentManager_test_script_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_script_basic() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 268, "test_script_basic" ) {}
 void runTest() { suite_TestComponentManager.test_script_basic(); }
} testDescription_suite_TestComponentManager_test_script_basic;

static class TestDescription_suite_TestComponentManager_test_script_helper_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_script_helper_basic() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 312, "test_script_helper_basic" ) {}
 void runTest() { suite_TestComponentManager.test_script_helper_basic(); }
} testDescription_suite_TestComponentManager_test_script_helper_basic;

static class TestDescription_suite_TestComponentManager_test_script_global_helper : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_script_global_helper() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 329, "test_script_global_helper" ) {}
 void runTest() { suite_TestComponentManager.test_script_global_helper(); }
} testDescription_suite_TestComponentManager_test_script_global_helper;

static class TestDescription_suite_TestComponentManager_test_script_interface : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_script_interface() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 345, "test_script_interface" ) {}
 void runTest() { suite_TestComponentManager.test_script_interface(); }
} testDescription_suite_TestComponentManager_test_script_interface;

static class TestDescription_suite_TestComponentManager_test_script_errors : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_script_errors() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 363, "test_script_errors" ) {}
 void runTest() { suite_TestComponentManager.test_script_errors(); }
} testDescription_suite_TestComponentManager_test_script_errors;

static class TestDescription_suite_TestComponentManager_test_script_entityID : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_script_entityID() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 380, "test_script_entityID" ) {}
 void runTest() { suite_TestComponentManager.test_script_entityID(); }
} testDescription_suite_TestComponentManager_test_script_entityID;

static class TestDescription_suite_TestComponentManager_test_script_QueryInterface : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_script_QueryInterface() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 400, "test_script_QueryInterface" ) {}
 void runTest() { suite_TestComponentManager.test_script_QueryInterface(); }
} testDescription_suite_TestComponentManager_test_script_QueryInterface;

static class TestDescription_suite_TestComponentManager_test_script_AddEntity : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_script_AddEntity() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 421, "test_script_AddEntity" ) {}
 void runTest() { suite_TestComponentManager.test_script_AddEntity(); }
} testDescription_suite_TestComponentManager_test_script_AddEntity;

static class TestDescription_suite_TestComponentManager_test_script_AddLocalEntity : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_script_AddLocalEntity() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 454, "test_script_AddLocalEntity" ) {}
 void runTest() { suite_TestComponentManager.test_script_AddLocalEntity(); }
} testDescription_suite_TestComponentManager_test_script_AddLocalEntity;

static class TestDescription_suite_TestComponentManager_test_script_DestroyEntity : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_script_DestroyEntity() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 487, "test_script_DestroyEntity" ) {}
 void runTest() { suite_TestComponentManager.test_script_DestroyEntity(); }
} testDescription_suite_TestComponentManager_test_script_DestroyEntity;

static class TestDescription_suite_TestComponentManager_test_script_messages : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_script_messages() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 507, "test_script_messages" ) {}
 void runTest() { suite_TestComponentManager.test_script_messages(); }
} testDescription_suite_TestComponentManager_test_script_messages;

static class TestDescription_suite_TestComponentManager_test_script_template : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_script_template() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 540, "test_script_template" ) {}
 void runTest() { suite_TestComponentManager.test_script_template(); }
} testDescription_suite_TestComponentManager_test_script_template;

static class TestDescription_suite_TestComponentManager_test_script_template_readonly : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_script_template_readonly() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 562, "test_script_template_readonly" ) {}
 void runTest() { suite_TestComponentManager.test_script_template_readonly(); }
} testDescription_suite_TestComponentManager_test_script_template_readonly;

static class TestDescription_suite_TestComponentManager_test_script_hotload : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_script_hotload() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 584, "test_script_hotload" ) {}
 void runTest() { suite_TestComponentManager.test_script_hotload(); }
} testDescription_suite_TestComponentManager_test_script_hotload;

static class TestDescription_suite_TestComponentManager_test_serialization : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_serialization() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 620, "test_serialization" ) {}
 void runTest() { suite_TestComponentManager.test_serialization(); }
} testDescription_suite_TestComponentManager_test_serialization;

static class TestDescription_suite_TestComponentManager_test_script_serialization : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_script_serialization() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 710, "test_script_serialization" ) {}
 void runTest() { suite_TestComponentManager.test_script_serialization(); }
} testDescription_suite_TestComponentManager_test_script_serialization;

static class TestDescription_suite_TestComponentManager_test_script_serialization_errors : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_script_serialization_errors() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 804, "test_script_serialization_errors" ) {}
 void runTest() { suite_TestComponentManager.test_script_serialization_errors(); }
} testDescription_suite_TestComponentManager_test_script_serialization_errors;

static class TestDescription_suite_TestComponentManager_test_script_serialization_template : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_script_serialization_template() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 822, "test_script_serialization_template" ) {}
 void runTest() { suite_TestComponentManager.test_script_serialization_template(); }
} testDescription_suite_TestComponentManager_test_script_serialization_template;

static class TestDescription_suite_TestComponentManager_test_dynamic_subscription : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentManager_test_dynamic_subscription() : CxxTest::RealTestDescription( Tests_TestComponentManager, suiteDescription_TestComponentManager, 858, "test_dynamic_subscription" ) {}
 void runTest() { suite_TestComponentManager.test_dynamic_subscription(); }
} testDescription_suite_TestComponentManager_test_dynamic_subscription;

