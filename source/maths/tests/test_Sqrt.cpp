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

bool suite_TestSqrt_init = false;
#include "/mnt/home/fpre/0ad/source/maths/tests/test_Sqrt.h"

static TestSqrt suite_TestSqrt;

static CxxTest::List Tests_TestSqrt = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSqrt( "../../../source/maths/tests/test_Sqrt.h", 26, "TestSqrt", suite_TestSqrt, Tests_TestSqrt );

static class TestDescription_suite_TestSqrt_test_sqrt : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSqrt_test_sqrt() : CxxTest::RealTestDescription( Tests_TestSqrt, suiteDescription_TestSqrt, 39, "test_sqrt" ) {}
 void runTest() { suite_TestSqrt.test_sqrt(); }
} testDescription_suite_TestSqrt_test_sqrt;

static class TestDescription_suite_TestSqrt_test_random : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSqrt_test_random() : CxxTest::RealTestDescription( Tests_TestSqrt, suiteDescription_TestSqrt, 73, "test_random" ) {}
 void runTest() { suite_TestSqrt.test_random(); }
} testDescription_suite_TestSqrt_test_random;

