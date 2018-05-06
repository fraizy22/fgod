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

bool suite_TestTerrain_init = false;
#include "/mnt/home/fpre/0ad/source/graphics/tests/test_Terrain.h"

static TestTerrain suite_TestTerrain;

static CxxTest::List Tests_TestTerrain = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestTerrain( "../../../source/graphics/tests/test_Terrain.h", 27, "TestTerrain", suite_TestTerrain, Tests_TestTerrain );

static class TestDescription_suite_TestTerrain_test_GetExactGroundLevel : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestTerrain_test_GetExactGroundLevel() : CxxTest::RealTestDescription( Tests_TestTerrain, suiteDescription_TestTerrain, 68, "test_GetExactGroundLevel" ) {}
 void runTest() { suite_TestTerrain.test_GetExactGroundLevel(); }
} testDescription_suite_TestTerrain_test_GetExactGroundLevel;

static class TestDescription_suite_TestTerrain_test_GetExactGroundLevelFixed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestTerrain_test_GetExactGroundLevelFixed() : CxxTest::RealTestDescription( Tests_TestTerrain, suiteDescription_TestTerrain, 96, "test_GetExactGroundLevelFixed" ) {}
 void runTest() { suite_TestTerrain.test_GetExactGroundLevelFixed(); }
} testDescription_suite_TestTerrain_test_GetExactGroundLevelFixed;

static class TestDescription_suite_TestTerrain_test_GetExactGroundLevelFixed_max : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestTerrain_test_GetExactGroundLevelFixed_max() : CxxTest::RealTestDescription( Tests_TestTerrain, suiteDescription_TestTerrain, 126, "test_GetExactGroundLevelFixed_max" ) {}
 void runTest() { suite_TestTerrain.test_GetExactGroundLevelFixed_max(); }
} testDescription_suite_TestTerrain_test_GetExactGroundLevelFixed_max;

static class TestDescription_suite_TestTerrain_test_CalcNormal : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestTerrain_test_CalcNormal() : CxxTest::RealTestDescription( Tests_TestTerrain, suiteDescription_TestTerrain, 148, "test_CalcNormal" ) {}
 void runTest() { suite_TestTerrain.test_CalcNormal(); }
} testDescription_suite_TestTerrain_test_CalcNormal;

static class TestDescription_suite_TestTerrain_test_CalcNormalFixed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestTerrain_test_CalcNormalFixed() : CxxTest::RealTestDescription( Tests_TestTerrain, suiteDescription_TestTerrain, 172, "test_CalcNormalFixed" ) {}
 void runTest() { suite_TestTerrain.test_CalcNormalFixed(); }
} testDescription_suite_TestTerrain_test_CalcNormalFixed;

