/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include "precompiled.h"
#include "lib/external_libraries/libsdl.h"
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>

bool suite_TestComponentScripts_init = false;
#include "/mnt/home/fpre/0ad/source/simulation2/components/tests/test_scripts.h"

static TestComponentScripts suite_TestComponentScripts;

static CxxTest::List Tests_TestComponentScripts = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestComponentScripts( "../../../source/simulation2/components/tests/test_scripts.h", 22, "TestComponentScripts", suite_TestComponentScripts, Tests_TestComponentScripts );

static class TestDescription_suite_TestComponentScripts_test_scripts : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestComponentScripts_test_scripts() : CxxTest::RealTestDescription( Tests_TestComponentScripts, suiteDescription_TestComponentScripts, 59, "test_scripts" ) {}
 void runTest() { suite_TestComponentScripts.test_scripts(); }
} testDescription_suite_TestComponentScripts_test_scripts;

