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

bool suite_TestGuiParseString_init = false;
#include "/mnt/home/fpre/0ad/source/gui/tests/test_ParseString.h"

static TestGuiParseString suite_TestGuiParseString;

static CxxTest::List Tests_TestGuiParseString = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestGuiParseString( "../../../source/gui/tests/test_ParseString.h", 24, "TestGuiParseString", suite_TestGuiParseString, Tests_TestGuiParseString );

static class TestDescription_suite_TestGuiParseString_test_clientarea : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestGuiParseString_test_clientarea() : CxxTest::RealTestDescription( Tests_TestGuiParseString, suiteDescription_TestGuiParseString, 27, "test_clientarea" ) {}
 void runTest() { suite_TestGuiParseString.test_clientarea(); }
} testDescription_suite_TestGuiParseString_test_clientarea;

static class TestDescription_suite_TestGuiParseString_test_rect : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestGuiParseString_test_rect() : CxxTest::RealTestDescription( Tests_TestGuiParseString, suiteDescription_TestGuiParseString, 66, "test_rect" ) {}
 void runTest() { suite_TestGuiParseString.test_rect(); }
} testDescription_suite_TestGuiParseString_test_rect;

static class TestDescription_suite_TestGuiParseString_test_size : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestGuiParseString_test_size() : CxxTest::RealTestDescription( Tests_TestGuiParseString, suiteDescription_TestGuiParseString, 79, "test_size" ) {}
 void runTest() { suite_TestGuiParseString.test_size(); }
} testDescription_suite_TestGuiParseString_test_size;

static class TestDescription_suite_TestGuiParseString_test_pos : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestGuiParseString_test_pos() : CxxTest::RealTestDescription( Tests_TestGuiParseString, suiteDescription_TestGuiParseString, 92, "test_pos" ) {}
 void runTest() { suite_TestGuiParseString.test_pos(); }
} testDescription_suite_TestGuiParseString_test_pos;

