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

bool suite_TestFixedVector2D_init = false;
#include "/mnt/home/fpre/0ad/source/maths/tests/test_FixedVector2D.h"

static TestFixedVector2D suite_TestFixedVector2D;

static CxxTest::List Tests_TestFixedVector2D = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestFixedVector2D( "../../../source/maths/tests/test_FixedVector2D.h", 30, "TestFixedVector2D", suite_TestFixedVector2D, Tests_TestFixedVector2D );

static class TestDescription_suite_TestFixedVector2D_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixedVector2D_test_basic() : CxxTest::RealTestDescription( Tests_TestFixedVector2D, suiteDescription_TestFixedVector2D, 33, "test_basic" ) {}
 void runTest() { suite_TestFixedVector2D.test_basic(); }
} testDescription_suite_TestFixedVector2D_test_basic;

static class TestDescription_suite_TestFixedVector2D_test_Length : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixedVector2D_test_Length() : CxxTest::RealTestDescription( Tests_TestFixedVector2D, suiteDescription_TestFixedVector2D, 53, "test_Length" ) {}
 void runTest() { suite_TestFixedVector2D.test_Length(); }
} testDescription_suite_TestFixedVector2D_test_Length;

static class TestDescription_suite_TestFixedVector2D_test_Normalize : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixedVector2D_test_Normalize() : CxxTest::RealTestDescription( Tests_TestFixedVector2D, suiteDescription_TestFixedVector2D, 69, "test_Normalize" ) {}
 void runTest() { suite_TestFixedVector2D.test_Normalize(); }
} testDescription_suite_TestFixedVector2D_test_Normalize;

static class TestDescription_suite_TestFixedVector2D_test_NormalizeTo : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixedVector2D_test_NormalizeTo() : CxxTest::RealTestDescription( Tests_TestFixedVector2D, suiteDescription_TestFixedVector2D, 92, "test_NormalizeTo" ) {}
 void runTest() { suite_TestFixedVector2D.test_NormalizeTo(); }
} testDescription_suite_TestFixedVector2D_test_NormalizeTo;

static class TestDescription_suite_TestFixedVector2D_test_Dot : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixedVector2D_test_Dot() : CxxTest::RealTestDescription( Tests_TestFixedVector2D, suiteDescription_TestFixedVector2D, 137, "test_Dot" ) {}
 void runTest() { suite_TestFixedVector2D.test_Dot(); }
} testDescription_suite_TestFixedVector2D_test_Dot;

