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

bool suite_TestLOSTexture_init = false;
#include "/mnt/home/fpre/0ad/source/graphics/tests/test_LOSTexture.h"

static TestLOSTexture suite_TestLOSTexture;

static CxxTest::List Tests_TestLOSTexture = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestLOSTexture( "../../../source/graphics/tests/test_LOSTexture.h", 25, "TestLOSTexture", suite_TestLOSTexture, Tests_TestLOSTexture );

static class TestDescription_suite_TestLOSTexture_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestLOSTexture_test_basic() : CxxTest::RealTestDescription( Tests_TestLOSTexture, suiteDescription_TestLOSTexture, 28, "test_basic" ) {}
 void runTest() { suite_TestLOSTexture.test_basic(); }
} testDescription_suite_TestLOSTexture_test_basic;

static class TestDescription_suite_TestLOSTexture_test_perf_DISABLED : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestLOSTexture_test_perf_DISABLED() : CxxTest::RealTestDescription( Tests_TestLOSTexture, suiteDescription_TestLOSTexture, 63, "test_perf_DISABLED" ) {}
 void runTest() { suite_TestLOSTexture.test_perf_DISABLED(); }
} testDescription_suite_TestLOSTexture_test_perf_DISABLED;

