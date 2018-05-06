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

bool suite_TestTest_init = false;
#include "/mnt/home/fpre/0ad/source/ps/tests/test_test.h"

static TestTest suite_TestTest;

static CxxTest::List Tests_TestTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestTest( "../../../source/ps/tests/test_test.h", 22, "TestTest", suite_TestTest, Tests_TestTest );

static class TestDescription_suite_TestTest_test_assert_size_t : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestTest_test_assert_size_t() : CxxTest::RealTestDescription( Tests_TestTest, suiteDescription_TestTest, 25, "test_assert_size_t" ) {}
 void runTest() { suite_TestTest.test_assert_size_t(); }
} testDescription_suite_TestTest_test_assert_size_t;

static class TestDescription_suite_TestTest_test_cstr : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestTest_test_cstr() : CxxTest::RealTestDescription( Tests_TestTest, suiteDescription_TestTest, 50, "test_cstr" ) {}
 void runTest() { suite_TestTest.test_cstr(); }
} testDescription_suite_TestTest_test_cstr;

