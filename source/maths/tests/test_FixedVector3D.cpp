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

bool suite_TestFixedVector3D_init = false;
#include "/mnt/home/fpre/0ad/source/maths/tests/test_FixedVector3D.h"

static TestFixedVector3D suite_TestFixedVector3D;

static CxxTest::List Tests_TestFixedVector3D = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestFixedVector3D( "../../../source/maths/tests/test_FixedVector3D.h", 32, "TestFixedVector3D", suite_TestFixedVector3D, Tests_TestFixedVector3D );

static class TestDescription_suite_TestFixedVector3D_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixedVector3D_test_basic() : CxxTest::RealTestDescription( Tests_TestFixedVector3D, suiteDescription_TestFixedVector3D, 35, "test_basic" ) {}
 void runTest() { suite_TestFixedVector3D.test_basic(); }
} testDescription_suite_TestFixedVector3D_test_basic;

static class TestDescription_suite_TestFixedVector3D_test_Length : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixedVector3D_test_Length() : CxxTest::RealTestDescription( Tests_TestFixedVector3D, suiteDescription_TestFixedVector3D, 55, "test_Length" ) {}
 void runTest() { suite_TestFixedVector3D.test_Length(); }
} testDescription_suite_TestFixedVector3D_test_Length;

static class TestDescription_suite_TestFixedVector3D_test_Normalize : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixedVector3D_test_Normalize() : CxxTest::RealTestDescription( Tests_TestFixedVector3D, suiteDescription_TestFixedVector3D, 71, "test_Normalize" ) {}
 void runTest() { suite_TestFixedVector3D.test_Normalize(); }
} testDescription_suite_TestFixedVector3D_test_Normalize;

static class TestDescription_suite_TestFixedVector3D_test_NormalizeTo : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixedVector3D_test_NormalizeTo() : CxxTest::RealTestDescription( Tests_TestFixedVector3D, suiteDescription_TestFixedVector3D, 94, "test_NormalizeTo" ) {}
 void runTest() { suite_TestFixedVector3D.test_NormalizeTo(); }
} testDescription_suite_TestFixedVector3D_test_NormalizeTo;

static class TestDescription_suite_TestFixedVector3D_test_Cross : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixedVector3D_test_Cross() : CxxTest::RealTestDescription( Tests_TestFixedVector3D, suiteDescription_TestFixedVector3D, 139, "test_Cross" ) {}
 void runTest() { suite_TestFixedVector3D.test_Cross(); }
} testDescription_suite_TestFixedVector3D_test_Cross;

static class TestDescription_suite_TestFixedVector3D_test_Dot : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixedVector3D_test_Dot() : CxxTest::RealTestDescription( Tests_TestFixedVector3D, suiteDescription_TestFixedVector3D, 147, "test_Dot" ) {}
 void runTest() { suite_TestFixedVector3D.test_Dot(); }
} testDescription_suite_TestFixedVector3D_test_Dot;

