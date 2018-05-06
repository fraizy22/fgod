/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include "precompiled.h"
#include "lib/external_libraries/libsdl.h"
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>

bool suite_TestCmdLineArgs_init = false;
#include "/mnt/home/fpre/0ad/source/ps/GameSetup/tests/test_CmdLineArgs.h"

static TestCmdLineArgs suite_TestCmdLineArgs;

static CxxTest::List Tests_TestCmdLineArgs = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCmdLineArgs( "../../../source/ps/GameSetup/tests/test_CmdLineArgs.h", 22, "TestCmdLineArgs", suite_TestCmdLineArgs, Tests_TestCmdLineArgs );

static class TestDescription_suite_TestCmdLineArgs_test_has : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmdLineArgs_test_has() : CxxTest::RealTestDescription( Tests_TestCmdLineArgs, suiteDescription_TestCmdLineArgs, 25, "test_has" ) {}
 void runTest() { suite_TestCmdLineArgs.test_has(); }
} testDescription_suite_TestCmdLineArgs_test_has;

static class TestDescription_suite_TestCmdLineArgs_test_get : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmdLineArgs_test_get() : CxxTest::RealTestDescription( Tests_TestCmdLineArgs, suiteDescription_TestCmdLineArgs, 35, "test_get" ) {}
 void runTest() { suite_TestCmdLineArgs.test_get(); }
} testDescription_suite_TestCmdLineArgs_test_get;

static class TestDescription_suite_TestCmdLineArgs_test_multiple : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmdLineArgs_test_multiple() : CxxTest::RealTestDescription( Tests_TestCmdLineArgs, suiteDescription_TestCmdLineArgs, 47, "test_multiple" ) {}
 void runTest() { suite_TestCmdLineArgs.test_multiple(); }
} testDescription_suite_TestCmdLineArgs_test_multiple;

static class TestDescription_suite_TestCmdLineArgs_test_get_invalid : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmdLineArgs_test_get_invalid() : CxxTest::RealTestDescription( Tests_TestCmdLineArgs, suiteDescription_TestCmdLineArgs, 67, "test_get_invalid" ) {}
 void runTest() { suite_TestCmdLineArgs.test_get_invalid(); }
} testDescription_suite_TestCmdLineArgs_test_get_invalid;

static class TestDescription_suite_TestCmdLineArgs_test_arg0 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmdLineArgs_test_arg0() : CxxTest::RealTestDescription( Tests_TestCmdLineArgs, suiteDescription_TestCmdLineArgs, 80, "test_arg0" ) {}
 void runTest() { suite_TestCmdLineArgs.test_arg0(); }
} testDescription_suite_TestCmdLineArgs_test_arg0;

static class TestDescription_suite_TestCmdLineArgs_test_get_without_names : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmdLineArgs_test_get_without_names() : CxxTest::RealTestDescription( Tests_TestCmdLineArgs, suiteDescription_TestCmdLineArgs, 98, "test_get_without_names" ) {}
 void runTest() { suite_TestCmdLineArgs.test_get_without_names(); }
} testDescription_suite_TestCmdLineArgs_test_get_without_names;

