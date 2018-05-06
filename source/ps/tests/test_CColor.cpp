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

bool suite_TestCColor_init = false;
#include "/mnt/home/fpre/0ad/source/ps/tests/test_CColor.h"

static TestCColor suite_TestCColor;

static CxxTest::List Tests_TestCColor = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCColor( "../../../source/ps/tests/test_CColor.h", 23, "TestCColor", suite_TestCColor, Tests_TestCColor );

static class TestDescription_suite_TestCColor_test_parse : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCColor_test_parse() : CxxTest::RealTestDescription( Tests_TestCColor, suiteDescription_TestCColor, 26, "test_parse" ) {}
 void runTest() { suite_TestCColor.test_parse(); }
} testDescription_suite_TestCColor_test_parse;

static class TestDescription_suite_TestCColor_test_parse_failure : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCColor_test_parse_failure() : CxxTest::RealTestDescription( Tests_TestCColor, suiteDescription_TestCColor, 47, "test_parse_failure" ) {}
 void runTest() { suite_TestCColor.test_parse_failure(); }
} testDescription_suite_TestCColor_test_parse_failure;

