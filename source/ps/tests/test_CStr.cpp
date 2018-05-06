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

bool suite_TestCStr_init = false;
#include "/mnt/home/fpre/0ad/source/ps/tests/test_CStr.h"

static TestCStr suite_TestCStr;

static CxxTest::List Tests_TestCStr = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCStr( "../../../source/ps/tests/test_CStr.h", 22, "TestCStr", suite_TestCStr, Tests_TestCStr );

static class TestDescription_suite_TestCStr_test_utf8_utf16_conversion : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCStr_test_utf8_utf16_conversion() : CxxTest::RealTestDescription( Tests_TestCStr, suiteDescription_TestCStr, 25, "test_utf8_utf16_conversion" ) {}
 void runTest() { suite_TestCStr.test_utf8_utf16_conversion(); }
} testDescription_suite_TestCStr_test_utf8_utf16_conversion;

static class TestDescription_suite_TestCStr_test_invalid_utf8 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCStr_test_invalid_utf8() : CxxTest::RealTestDescription( Tests_TestCStr, suiteDescription_TestCStr, 59, "test_invalid_utf8" ) {}
 void runTest() { suite_TestCStr.test_invalid_utf8(); }
} testDescription_suite_TestCStr_test_invalid_utf8;

static class TestDescription_suite_TestCStr_test_serialize_8 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCStr_test_serialize_8() : CxxTest::RealTestDescription( Tests_TestCStr, suiteDescription_TestCStr, 100, "test_serialize_8" ) {}
 void runTest() { suite_TestCStr.test_serialize_8(); }
} testDescription_suite_TestCStr_test_serialize_8;

static class TestDescription_suite_TestCStr_test_parse : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCStr_test_parse() : CxxTest::RealTestDescription( Tests_TestCStr, suiteDescription_TestCStr, 110, "test_parse" ) {}
 void runTest() { suite_TestCStr.test_parse(); }
} testDescription_suite_TestCStr_test_parse;

