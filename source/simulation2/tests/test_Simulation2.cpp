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

bool suite_TestSimulation2_init = false;
#include "/mnt/home/fpre/0ad/source/simulation2/tests/test_Simulation2.h"

static TestSimulation2 suite_TestSimulation2;

static CxxTest::List Tests_TestSimulation2 = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSimulation2( "../../../source/simulation2/tests/test_Simulation2.h", 30, "TestSimulation2", suite_TestSimulation2, Tests_TestSimulation2 );

static class TestDescription_suite_TestSimulation2_test_AddEntity : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSimulation2_test_AddEntity() : CxxTest::RealTestDescription( Tests_TestSimulation2, suiteDescription_TestSimulation2, 58, "test_AddEntity" ) {}
 void runTest() { suite_TestSimulation2.test_AddEntity(); }
} testDescription_suite_TestSimulation2_test_AddEntity;

static class TestDescription_suite_TestSimulation2_test_DestroyEntity : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSimulation2_test_DestroyEntity() : CxxTest::RealTestDescription( Tests_TestSimulation2, suiteDescription_TestSimulation2, 78, "test_DestroyEntity" ) {}
 void runTest() { suite_TestSimulation2.test_DestroyEntity(); }
} testDescription_suite_TestSimulation2_test_DestroyEntity;

static class TestDescription_suite_TestSimulation2_test_hotload_scripts : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSimulation2_test_hotload_scripts() : CxxTest::RealTestDescription( Tests_TestSimulation2, suiteDescription_TestSimulation2, 130, "test_hotload_scripts" ) {}
 void runTest() { suite_TestSimulation2.test_hotload_scripts(); }
} testDescription_suite_TestSimulation2_test_hotload_scripts;

