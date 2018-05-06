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

bool suite_TestCppformat_init = false;
#include "/mnt/home/fpre/0ad/source/ps/tests/test_cppformat.h"

static TestCppformat suite_TestCppformat;

static CxxTest::List Tests_TestCppformat = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCppformat( "../../../source/ps/tests/test_cppformat.h", 22, "TestCppformat", suite_TestCppformat, Tests_TestCppformat );

static class TestDescription_suite_TestCppformat_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCppformat_test_basic() : CxxTest::RealTestDescription( Tests_TestCppformat, suiteDescription_TestCppformat, 25, "test_basic" ) {}
 void runTest() { suite_TestCppformat.test_basic(); }
} testDescription_suite_TestCppformat_test_basic;

