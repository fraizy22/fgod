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

bool suite_TestScriptInterface_init = false;
#include "/mnt/home/fpre/0ad/source/scriptinterface/tests/test_ScriptInterface.h"

static TestScriptInterface suite_TestScriptInterface;

static CxxTest::List Tests_TestScriptInterface = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestScriptInterface( "../../../source/scriptinterface/tests/test_ScriptInterface.h", 26, "TestScriptInterface", suite_TestScriptInterface, Tests_TestScriptInterface );

static class TestDescription_suite_TestScriptInterface_test_loadscript_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestScriptInterface_test_loadscript_basic() : CxxTest::RealTestDescription( Tests_TestScriptInterface, suiteDescription_TestScriptInterface, 29, "test_loadscript_basic" ) {}
 void runTest() { suite_TestScriptInterface.test_loadscript_basic(); }
} testDescription_suite_TestScriptInterface_test_loadscript_basic;

static class TestDescription_suite_TestScriptInterface_test_loadscript_error : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestScriptInterface_test_loadscript_error() : CxxTest::RealTestDescription( Tests_TestScriptInterface, suiteDescription_TestScriptInterface, 38, "test_loadscript_error" ) {}
 void runTest() { suite_TestScriptInterface.test_loadscript_error(); }
} testDescription_suite_TestScriptInterface_test_loadscript_error;

static class TestDescription_suite_TestScriptInterface_test_loadscript_strict_warning : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestScriptInterface_test_loadscript_strict_warning() : CxxTest::RealTestDescription( Tests_TestScriptInterface, suiteDescription_TestScriptInterface, 46, "test_loadscript_strict_warning" ) {}
 void runTest() { suite_TestScriptInterface.test_loadscript_strict_warning(); }
} testDescription_suite_TestScriptInterface_test_loadscript_strict_warning;

static class TestDescription_suite_TestScriptInterface_test_loadscript_strict_error : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestScriptInterface_test_loadscript_strict_error() : CxxTest::RealTestDescription( Tests_TestScriptInterface, suiteDescription_TestScriptInterface, 55, "test_loadscript_strict_error" ) {}
 void runTest() { suite_TestScriptInterface.test_loadscript_strict_error(); }
} testDescription_suite_TestScriptInterface_test_loadscript_strict_error;

static class TestDescription_suite_TestScriptInterface_test_clone_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestScriptInterface_test_clone_basic() : CxxTest::RealTestDescription( Tests_TestScriptInterface, suiteDescription_TestScriptInterface, 63, "test_clone_basic" ) {}
 void runTest() { suite_TestScriptInterface.test_clone_basic(); }
} testDescription_suite_TestScriptInterface_test_clone_basic;

static class TestDescription_suite_TestScriptInterface_test_clone_getters : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestScriptInterface_test_clone_getters() : CxxTest::RealTestDescription( Tests_TestScriptInterface, suiteDescription_TestScriptInterface, 85, "test_clone_getters" ) {}
 void runTest() { suite_TestScriptInterface.test_clone_getters(); }
} testDescription_suite_TestScriptInterface_test_clone_getters;

static class TestDescription_suite_TestScriptInterface_test_clone_cyclic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestScriptInterface_test_clone_cyclic() : CxxTest::RealTestDescription( Tests_TestScriptInterface, suiteDescription_TestScriptInterface, 109, "test_clone_cyclic" ) {}
 void runTest() { suite_TestScriptInterface.test_clone_cyclic(); }
} testDescription_suite_TestScriptInterface_test_clone_cyclic;

static class TestDescription_suite_TestScriptInterface_test_rooted_templates : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestScriptInterface_test_rooted_templates() : CxxTest::RealTestDescription( Tests_TestScriptInterface, suiteDescription_TestScriptInterface, 143, "test_rooted_templates" ) {}
 void runTest() { suite_TestScriptInterface.test_rooted_templates(); }
} testDescription_suite_TestScriptInterface_test_rooted_templates;

static class TestDescription_suite_TestScriptInterface_test_random : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestScriptInterface_test_random() : CxxTest::RealTestDescription( Tests_TestScriptInterface, suiteDescription_TestScriptInterface, 221, "test_random" ) {}
 void runTest() { suite_TestScriptInterface.test_random(); }
} testDescription_suite_TestScriptInterface_test_random;

static class TestDescription_suite_TestScriptInterface_test_json : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestScriptInterface_test_json() : CxxTest::RealTestDescription( Tests_TestScriptInterface, suiteDescription_TestScriptInterface, 241, "test_json" ) {}
 void runTest() { suite_TestScriptInterface.test_json(); }
} testDescription_suite_TestScriptInterface_test_json;

