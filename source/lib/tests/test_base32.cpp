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

bool suite_TestBase32_init = false;
#include "/mnt/home/fpre/0ad/source/lib/tests/test_base32.h"

static TestBase32 suite_TestBase32;

static CxxTest::List Tests_TestBase32 = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestBase32( "../../../source/lib/tests/test_base32.h", 27, "TestBase32", suite_TestBase32, Tests_TestBase32 );

static class TestDescription_suite_TestBase32_test_base32 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBase32_test_base32() : CxxTest::RealTestDescription( Tests_TestBase32, suiteDescription_TestBase32, 30, "test_base32" ) {}
 void runTest() { suite_TestBase32.test_base32(); }
} testDescription_suite_TestBase32_test_base32;

static class TestDescription_suite_TestBase32_test_base32_lengths : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBase32_test_base32_lengths() : CxxTest::RealTestDescription( Tests_TestBase32, suiteDescription_TestBase32, 40, "test_base32_lengths" ) {}
 void runTest() { suite_TestBase32.test_base32_lengths(); }
} testDescription_suite_TestBase32_test_base32_lengths;

