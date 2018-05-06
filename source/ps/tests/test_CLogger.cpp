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

bool suite_TestCLogger_init = false;
#include "/mnt/home/fpre/0ad/source/ps/tests/test_CLogger.h"

static TestCLogger suite_TestCLogger;

static CxxTest::List Tests_TestCLogger = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCLogger( "../../../source/ps/tests/test_CLogger.h", 22, "TestCLogger", suite_TestCLogger, Tests_TestCLogger );

static class TestDescription_suite_TestCLogger_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCLogger_test_basic() : CxxTest::RealTestDescription( Tests_TestCLogger, suiteDescription_TestCLogger, 25, "test_basic" ) {}
 void runTest() { suite_TestCLogger.test_basic(); }
} testDescription_suite_TestCLogger_test_basic;

static class TestDescription_suite_TestCLogger_test_unicode : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCLogger_test_unicode() : CxxTest::RealTestDescription( Tests_TestCLogger, suiteDescription_TestCLogger, 37, "test_unicode" ) {}
 void runTest() { suite_TestCLogger.test_unicode(); }
} testDescription_suite_TestCLogger_test_unicode;

static class TestDescription_suite_TestCLogger_test_html : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCLogger_test_html() : CxxTest::RealTestDescription( Tests_TestCLogger, suiteDescription_TestCLogger, 48, "test_html" ) {}
 void runTest() { suite_TestCLogger.test_html(); }
} testDescription_suite_TestCLogger_test_html;

