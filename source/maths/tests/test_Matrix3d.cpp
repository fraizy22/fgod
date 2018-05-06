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

bool suite_TestMatrix_init = false;
#include "/mnt/home/fpre/0ad/source/maths/tests/test_Matrix3d.h"

static TestMatrix suite_TestMatrix;

static CxxTest::List Tests_TestMatrix = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMatrix( "../../../source/maths/tests/test_Matrix3d.h", 25, "TestMatrix", suite_TestMatrix, Tests_TestMatrix );

static class TestDescription_suite_TestMatrix_test_inverse : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMatrix_test_inverse() : CxxTest::RealTestDescription( Tests_TestMatrix, suiteDescription_TestMatrix, 28, "test_inverse" ) {}
 void runTest() { suite_TestMatrix.test_inverse(); }
} testDescription_suite_TestMatrix_test_inverse;

static class TestDescription_suite_TestMatrix_test_quats : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMatrix_test_quats() : CxxTest::RealTestDescription( Tests_TestMatrix, suiteDescription_TestMatrix, 53, "test_quats" ) {}
 void runTest() { suite_TestMatrix.test_quats(); }
} testDescription_suite_TestMatrix_test_quats;

static class TestDescription_suite_TestMatrix_test_rotate : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMatrix_test_rotate() : CxxTest::RealTestDescription( Tests_TestMatrix, suiteDescription_TestMatrix, 84, "test_rotate" ) {}
 void runTest() { suite_TestMatrix.test_rotate(); }
} testDescription_suite_TestMatrix_test_rotate;

static class TestDescription_suite_TestMatrix_test_getRotation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMatrix_test_getRotation() : CxxTest::RealTestDescription( Tests_TestMatrix, suiteDescription_TestMatrix, 125, "test_getRotation" ) {}
 void runTest() { suite_TestMatrix.test_getRotation(); }
} testDescription_suite_TestMatrix_test_getRotation;

static class TestDescription_suite_TestMatrix_test_scale : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMatrix_test_scale() : CxxTest::RealTestDescription( Tests_TestMatrix, suiteDescription_TestMatrix, 144, "test_scale" ) {}
 void runTest() { suite_TestMatrix.test_scale(); }
} testDescription_suite_TestMatrix_test_scale;

