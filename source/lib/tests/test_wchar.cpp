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

bool suite_Test_wchar_init = false;
#include "/mnt/home/fpre/0ad/source/lib/tests/test_wchar.h"

static Test_wchar suite_Test_wchar;

static CxxTest::List Tests_Test_wchar = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_Test_wchar( "../../../source/lib/tests/test_wchar.h", 28, "Test_wchar", suite_Test_wchar, Tests_Test_wchar );

static class TestDescription_suite_Test_wchar_test_utf8_utf16_conversion : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test_wchar_test_utf8_utf16_conversion() : CxxTest::RealTestDescription( Tests_Test_wchar, suiteDescription_Test_wchar, 31, "test_utf8_utf16_conversion" ) {}
 void runTest() { suite_Test_wchar.test_utf8_utf16_conversion(); }
} testDescription_suite_Test_wchar_test_utf8_utf16_conversion;

static class TestDescription_suite_Test_wchar_test_invalid_utf8 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Test_wchar_test_invalid_utf8() : CxxTest::RealTestDescription( Tests_Test_wchar, suiteDescription_Test_wchar, 65, "test_invalid_utf8" ) {}
 void runTest() { suite_Test_wchar.test_invalid_utf8(); }
} testDescription_suite_Test_wchar_test_invalid_utf8;

