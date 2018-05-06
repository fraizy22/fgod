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

bool suite_TestPath_init = false;
#include "/mnt/home/fpre/0ad/source/lib/tests/test_path.h"

static TestPath suite_TestPath;

static CxxTest::List Tests_TestPath = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPath( "../../../source/lib/tests/test_path.h", 28, "TestPath", suite_TestPath, Tests_TestPath );

static class TestDescription_suite_TestPath_test_ctor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestPath_test_ctor() : CxxTest::RealTestDescription( Tests_TestPath, suiteDescription_TestPath, 31, "test_ctor" ) {}
 void runTest() { suite_TestPath.test_ctor(); }
} testDescription_suite_TestPath_test_ctor;

