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

bool suite_TestCmpPathfinder_init = false;
#include "/mnt/home/fpre/0ad/source/simulation2/components/tests/test_Pathfinder.h"

static TestCmpPathfinder suite_TestCmpPathfinder;

static CxxTest::List Tests_TestCmpPathfinder = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCmpPathfinder( "../../../source/simulation2/components/tests/test_Pathfinder.h", 32, "TestCmpPathfinder", suite_TestCmpPathfinder, Tests_TestCmpPathfinder );

static class TestDescription_suite_TestCmpPathfinder_test_namespace : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmpPathfinder_test_namespace() : CxxTest::RealTestDescription( Tests_TestCmpPathfinder, suiteDescription_TestCmpPathfinder, 58, "test_namespace" ) {}
 void runTest() { suite_TestCmpPathfinder.test_namespace(); }
} testDescription_suite_TestCmpPathfinder_test_namespace;

static class TestDescription_suite_TestCmpPathfinder_test_pathgoal : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmpPathfinder_test_pathgoal() : CxxTest::RealTestDescription( Tests_TestCmpPathfinder, suiteDescription_TestCmpPathfinder, 67, "test_pathgoal" ) {}
 void runTest() { suite_TestCmpPathfinder.test_pathgoal(); }
} testDescription_suite_TestCmpPathfinder_test_pathgoal;

static class TestDescription_suite_TestCmpPathfinder_test_performance_DISABLED : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmpPathfinder_test_performance_DISABLED() : CxxTest::RealTestDescription( Tests_TestCmpPathfinder, suiteDescription_TestCmpPathfinder, 114, "test_performance_DISABLED" ) {}
 void runTest() { suite_TestCmpPathfinder.test_performance_DISABLED(); }
} testDescription_suite_TestCmpPathfinder_test_performance_DISABLED;

static class TestDescription_suite_TestCmpPathfinder_test_performance_short_DISABLED : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmpPathfinder_test_performance_short_DISABLED() : CxxTest::RealTestDescription( Tests_TestCmpPathfinder, suiteDescription_TestCmpPathfinder, 168, "test_performance_short_DISABLED" ) {}
 void runTest() { suite_TestCmpPathfinder.test_performance_short_DISABLED(); }
} testDescription_suite_TestCmpPathfinder_test_performance_short_DISABLED;

static class TestDescription_suite_TestCmpPathfinder_test_perf2_DISABLED : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmpPathfinder_test_perf2_DISABLED() : CxxTest::RealTestDescription( Tests_TestCmpPathfinder, suiteDescription_TestCmpPathfinder, 225, "test_perf2_DISABLED" ) {}
 void runTest() { suite_TestCmpPathfinder.test_perf2_DISABLED(); }
} testDescription_suite_TestCmpPathfinder_test_perf2_DISABLED;

static class TestDescription_suite_TestCmpPathfinder_test_perf3_DISABLED : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmpPathfinder_test_perf3_DISABLED() : CxxTest::RealTestDescription( Tests_TestCmpPathfinder, suiteDescription_TestCmpPathfinder, 280, "test_perf3_DISABLED" ) {}
 void runTest() { suite_TestCmpPathfinder.test_perf3_DISABLED(); }
} testDescription_suite_TestCmpPathfinder_test_perf3_DISABLED;

