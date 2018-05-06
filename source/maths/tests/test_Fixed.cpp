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

bool suite_TestFixed_init = false;
#include "/mnt/home/fpre/0ad/source/maths/tests/test_Fixed.h"

static TestFixed suite_TestFixed;

static CxxTest::List Tests_TestFixed = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestFixed( "../../../source/maths/tests/test_Fixed.h", 23, "TestFixed", suite_TestFixed, Tests_TestFixed );

static class TestDescription_suite_TestFixed_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixed_test_basic() : CxxTest::RealTestDescription( Tests_TestFixed, suiteDescription_TestFixed, 26, "test_basic" ) {}
 void runTest() { suite_TestFixed.test_basic(); }
} testDescription_suite_TestFixed_test_basic;

static class TestDescription_suite_TestFixed_test_FromInt : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixed_test_FromInt() : CxxTest::RealTestDescription( Tests_TestFixed, suiteDescription_TestFixed, 37, "test_FromInt" ) {}
 void runTest() { suite_TestFixed.test_FromInt(); }
} testDescription_suite_TestFixed_test_FromInt;

static class TestDescription_suite_TestFixed_test_FromFloat : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixed_test_FromFloat() : CxxTest::RealTestDescription( Tests_TestFixed, suiteDescription_TestFixed, 45, "test_FromFloat" ) {}
 void runTest() { suite_TestFixed.test_FromFloat(); }
} testDescription_suite_TestFixed_test_FromFloat;

static class TestDescription_suite_TestFixed_test_FromDouble : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixed_test_FromDouble() : CxxTest::RealTestDescription( Tests_TestFixed, suiteDescription_TestFixed, 65, "test_FromDouble" ) {}
 void runTest() { suite_TestFixed.test_FromDouble(); }
} testDescription_suite_TestFixed_test_FromDouble;

static class TestDescription_suite_TestFixed_test_FromFloat_Rounding : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixed_test_FromFloat_Rounding() : CxxTest::RealTestDescription( Tests_TestFixed, suiteDescription_TestFixed, 85, "test_FromFloat_Rounding" ) {}
 void runTest() { suite_TestFixed.test_FromFloat_Rounding(); }
} testDescription_suite_TestFixed_test_FromFloat_Rounding;

static class TestDescription_suite_TestFixed_test_FromString : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixed_test_FromString() : CxxTest::RealTestDescription( Tests_TestFixed, suiteDescription_TestFixed, 98, "test_FromString" ) {}
 void runTest() { suite_TestFixed.test_FromString(); }
} testDescription_suite_TestFixed_test_FromString;

static class TestDescription_suite_TestFixed_test_ToString : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixed_test_ToString() : CxxTest::RealTestDescription( Tests_TestFixed, suiteDescription_TestFixed, 119, "test_ToString" ) {}
 void runTest() { suite_TestFixed.test_ToString(); }
} testDescription_suite_TestFixed_test_ToString;

static class TestDescription_suite_TestFixed_test_RoundToZero : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixed_test_RoundToZero() : CxxTest::RealTestDescription( Tests_TestFixed, suiteDescription_TestFixed, 144, "test_RoundToZero" ) {}
 void runTest() { suite_TestFixed.test_RoundToZero(); }
} testDescription_suite_TestFixed_test_RoundToZero;

static class TestDescription_suite_TestFixed_test_RoundToInfinity : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixed_test_RoundToInfinity() : CxxTest::RealTestDescription( Tests_TestFixed, suiteDescription_TestFixed, 160, "test_RoundToInfinity" ) {}
 void runTest() { suite_TestFixed.test_RoundToInfinity(); }
} testDescription_suite_TestFixed_test_RoundToInfinity;

static class TestDescription_suite_TestFixed_test_RoundToNegInfinity : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixed_test_RoundToNegInfinity() : CxxTest::RealTestDescription( Tests_TestFixed, suiteDescription_TestFixed, 176, "test_RoundToNegInfinity" ) {}
 void runTest() { suite_TestFixed.test_RoundToNegInfinity(); }
} testDescription_suite_TestFixed_test_RoundToNegInfinity;

static class TestDescription_suite_TestFixed_test_RoundToNearest : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixed_test_RoundToNearest() : CxxTest::RealTestDescription( Tests_TestFixed, suiteDescription_TestFixed, 192, "test_RoundToNearest" ) {}
 void runTest() { suite_TestFixed.test_RoundToNearest(); }
} testDescription_suite_TestFixed_test_RoundToNearest;

static class TestDescription_suite_TestFixed_test_Mod : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixed_test_Mod() : CxxTest::RealTestDescription( Tests_TestFixed, suiteDescription_TestFixed, 210, "test_Mod" ) {}
 void runTest() { suite_TestFixed.test_Mod(); }
} testDescription_suite_TestFixed_test_Mod;

static class TestDescription_suite_TestFixed_test_Sqrt : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixed_test_Sqrt() : CxxTest::RealTestDescription( Tests_TestFixed, suiteDescription_TestFixed, 224, "test_Sqrt" ) {}
 void runTest() { suite_TestFixed.test_Sqrt(); }
} testDescription_suite_TestFixed_test_Sqrt;

static class TestDescription_suite_TestFixed_test_Atan2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixed_test_Atan2() : CxxTest::RealTestDescription( Tests_TestFixed, suiteDescription_TestFixed, 234, "test_Atan2" ) {}
 void runTest() { suite_TestFixed.test_Atan2(); }
} testDescription_suite_TestFixed_test_Atan2;

static class TestDescription_suite_TestFixed_test_SinCos : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFixed_test_SinCos() : CxxTest::RealTestDescription( Tests_TestFixed, suiteDescription_TestFixed, 279, "test_SinCos" ) {}
 void runTest() { suite_TestFixed.test_SinCos(); }
} testDescription_suite_TestFixed_test_SinCos;

