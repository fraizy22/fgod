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

bool suite_TestString_s_init = false;
#include "/mnt/home/fpre/0ad/source/lib/tests/test_secure_crt.h"

static TestString_s suite_TestString_s;

static CxxTest::List Tests_TestString_s = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestString_s( "../../../source/lib/tests/test_secure_crt.h", 73, "TestString_s", suite_TestString_s, Tests_TestString_s );

static class TestDescription_suite_TestString_s_test_param_validation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestString_s_test_param_validation() : CxxTest::RealTestDescription( Tests_TestString_s, suiteDescription_TestString_s, 169, "test_param_validation" ) {}
 void runTest() { suite_TestString_s.test_param_validation(); }
} testDescription_suite_TestString_s_test_param_validation;

static class TestDescription_suite_TestString_s_test_length : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestString_s_test_length() : CxxTest::RealTestDescription( Tests_TestString_s, suiteDescription_TestString_s, 236, "test_length" ) {}
 void runTest() { suite_TestString_s.test_length(); }
} testDescription_suite_TestString_s_test_length;

static class TestDescription_suite_TestString_s_test_copy : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestString_s_test_copy() : CxxTest::RealTestDescription( Tests_TestString_s, suiteDescription_TestString_s, 253, "test_copy" ) {}
 void runTest() { suite_TestString_s.test_copy(); }
} testDescription_suite_TestString_s_test_copy;

static class TestDescription_suite_TestString_s_test_concatenate : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestString_s_test_concatenate() : CxxTest::RealTestDescription( Tests_TestString_s, suiteDescription_TestString_s, 271, "test_concatenate" ) {}
 void runTest() { suite_TestString_s.test_concatenate(); }
} testDescription_suite_TestString_s_test_concatenate;

static class TestDescription_suite_TestString_s_test_printf_overflow : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestString_s_test_printf_overflow() : CxxTest::RealTestDescription( Tests_TestString_s, suiteDescription_TestString_s, 321, "test_printf_overflow" ) {}
 void runTest() { suite_TestString_s.test_printf_overflow(); }
} testDescription_suite_TestString_s_test_printf_overflow;

static class TestDescription_suite_TestString_s_test_wprintf_overflow : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestString_s_test_wprintf_overflow() : CxxTest::RealTestDescription( Tests_TestString_s, suiteDescription_TestString_s, 334, "test_wprintf_overflow" ) {}
 void runTest() { suite_TestString_s.test_wprintf_overflow(); }
} testDescription_suite_TestString_s_test_wprintf_overflow;

static class TestDescription_suite_TestString_s_test_printf_strings : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestString_s_test_printf_strings() : CxxTest::RealTestDescription( Tests_TestString_s, suiteDescription_TestString_s, 347, "test_printf_strings" ) {}
 void runTest() { suite_TestString_s.test_printf_strings(); }
} testDescription_suite_TestString_s_test_printf_strings;

static class TestDescription_suite_TestString_s_test_wprintf_strings : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestString_s_test_wprintf_strings() : CxxTest::RealTestDescription( Tests_TestString_s, suiteDescription_TestString_s, 354, "test_wprintf_strings" ) {}
 void runTest() { suite_TestString_s.test_wprintf_strings(); }
} testDescription_suite_TestString_s_test_wprintf_strings;

