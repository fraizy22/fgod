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

bool suite_TestCmpPosition_init = false;
#include "/mnt/home/fpre/0ad/source/simulation2/components/tests/test_Position.h"

static TestCmpPosition suite_TestCmpPosition;

static CxxTest::List Tests_TestCmpPosition = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCmpPosition( "../../../source/simulation2/components/tests/test_Position.h", 47, "TestCmpPosition", suite_TestCmpPosition, Tests_TestCmpPosition );

static class TestDescription_suite_TestCmpPosition_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmpPosition_test_basic() : CxxTest::RealTestDescription( Tests_TestCmpPosition, suiteDescription_TestCmpPosition, 65, "test_basic" ) {}
 void runTest() { suite_TestCmpPosition.test_basic(); }
} testDescription_suite_TestCmpPosition_test_basic;

static class TestDescription_suite_TestCmpPosition_test_water : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmpPosition_test_water() : CxxTest::RealTestDescription( Tests_TestCmpPosition, suiteDescription_TestCmpPosition, 137, "test_water" ) {}
 void runTest() { suite_TestCmpPosition.test_water(); }
} testDescription_suite_TestCmpPosition_test_water;

static class TestDescription_suite_TestCmpPosition_test_serialize : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmpPosition_test_serialize() : CxxTest::RealTestDescription( Tests_TestCmpPosition, suiteDescription_TestCmpPosition, 210, "test_serialize" ) {}
 void runTest() { suite_TestCmpPosition.test_serialize(); }
} testDescription_suite_TestCmpPosition_test_serialize;

