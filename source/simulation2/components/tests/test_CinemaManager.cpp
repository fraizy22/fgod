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

bool suite_TestCmpCinemaManager_init = false;
#include "/mnt/home/fpre/0ad/source/simulation2/components/tests/test_CinemaManager.h"

static TestCmpCinemaManager suite_TestCmpCinemaManager;

static CxxTest::List Tests_TestCmpCinemaManager = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCmpCinemaManager( "../../../source/simulation2/components/tests/test_CinemaManager.h", 22, "TestCmpCinemaManager", suite_TestCmpCinemaManager, Tests_TestCmpCinemaManager );

static class TestDescription_suite_TestCmpCinemaManager_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmpCinemaManager_test_basic() : CxxTest::RealTestDescription( Tests_TestCmpCinemaManager, suiteDescription_TestCmpCinemaManager, 35, "test_basic" ) {}
 void runTest() { suite_TestCmpCinemaManager.test_basic(); }
} testDescription_suite_TestCmpCinemaManager_test_basic;

