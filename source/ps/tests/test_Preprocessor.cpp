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

bool suite_TestPreprocessor_init = false;
#include "/mnt/home/fpre/0ad/source/ps/tests/test_Preprocessor.h"

static TestPreprocessor suite_TestPreprocessor;

static CxxTest::List Tests_TestPreprocessor = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestPreprocessor( "../../../source/ps/tests/test_Preprocessor.h", 22, "TestPreprocessor", suite_TestPreprocessor, Tests_TestPreprocessor );

static class TestDescription_suite_TestPreprocessor_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestPreprocessor_test_basic() : CxxTest::RealTestDescription( Tests_TestPreprocessor, suiteDescription_TestPreprocessor, 25, "test_basic" ) {}
 void runTest() { suite_TestPreprocessor.test_basic(); }
} testDescription_suite_TestPreprocessor_test_basic;

static class TestDescription_suite_TestPreprocessor_test_error : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestPreprocessor_test_error() : CxxTest::RealTestDescription( Tests_TestPreprocessor, suiteDescription_TestPreprocessor, 38, "test_error" ) {}
 void runTest() { suite_TestPreprocessor.test_error(); }
} testDescription_suite_TestPreprocessor_test_error;

