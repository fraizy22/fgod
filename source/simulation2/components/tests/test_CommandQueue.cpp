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

bool suite_TestCmpCommandQueue_init = false;
#include "/mnt/home/fpre/0ad/source/simulation2/components/tests/test_CommandQueue.h"

static TestCmpCommandQueue suite_TestCmpCommandQueue;

static CxxTest::List Tests_TestCmpCommandQueue = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCmpCommandQueue( "../../../source/simulation2/components/tests/test_CommandQueue.h", 22, "TestCmpCommandQueue", suite_TestCmpCommandQueue, Tests_TestCmpCommandQueue );

static class TestDescription_suite_TestCmpCommandQueue_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmpCommandQueue_test_basic() : CxxTest::RealTestDescription( Tests_TestCmpCommandQueue, suiteDescription_TestCmpCommandQueue, 35, "test_basic" ) {}
 void runTest() { suite_TestCmpCommandQueue.test_basic(); }
} testDescription_suite_TestCmpCommandQueue_test_basic;

