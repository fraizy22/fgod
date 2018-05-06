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

bool suite_TestLib_init = false;
#include "/mnt/home/fpre/0ad/source/lib/tests/test_lib.h"

static TestLib suite_TestLib;

static CxxTest::List Tests_TestLib = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestLib( "../../../source/lib/tests/test_lib.h", 27, "TestLib", suite_TestLib, Tests_TestLib );

static class TestDescription_suite_TestLib_test_hi_lo : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestLib_test_hi_lo() : CxxTest::RealTestDescription( Tests_TestLib, suiteDescription_TestLib, 30, "test_hi_lo" ) {}
 void runTest() { suite_TestLib.test_hi_lo(); }
} testDescription_suite_TestLib_test_hi_lo;

