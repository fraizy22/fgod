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

bool suite_TestHeaderless_init = false;
#include "/mnt/home/fpre/0ad/source/lib/allocators/tests/test_headerless.h"

static TestHeaderless suite_TestHeaderless;

static CxxTest::List Tests_TestHeaderless = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestHeaderless( "../../../source/lib/allocators/tests/test_headerless.h", 30, "TestHeaderless", suite_TestHeaderless, Tests_TestHeaderless );

static class TestDescription_suite_TestHeaderless_test_Basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestHeaderless_test_Basic() : CxxTest::RealTestDescription( Tests_TestHeaderless, suiteDescription_TestHeaderless, 33, "test_Basic" ) {}
 void runTest() { suite_TestHeaderless.test_Basic(); }
} testDescription_suite_TestHeaderless_test_Basic;

static class TestDescription_suite_TestHeaderless_test_Free : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestHeaderless_test_Free() : CxxTest::RealTestDescription( Tests_TestHeaderless, suiteDescription_TestHeaderless, 60, "test_Free" ) {}
 void runTest() { suite_TestHeaderless.test_Free(); }
} testDescription_suite_TestHeaderless_test_Free;

static class TestDescription_suite_TestHeaderless_test_Coalesce : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestHeaderless_test_Coalesce() : CxxTest::RealTestDescription( Tests_TestHeaderless, suiteDescription_TestHeaderless, 70, "test_Coalesce" ) {}
 void runTest() { suite_TestHeaderless.test_Coalesce(); }
} testDescription_suite_TestHeaderless_test_Coalesce;

static class TestDescription_suite_TestHeaderless_test_Reset : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestHeaderless_test_Reset() : CxxTest::RealTestDescription( Tests_TestHeaderless, suiteDescription_TestHeaderless, 96, "test_Reset" ) {}
 void runTest() { suite_TestHeaderless.test_Reset(); }
} testDescription_suite_TestHeaderless_test_Reset;

static class TestDescription_suite_TestHeaderless_test_Randomized : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestHeaderless_test_Randomized() : CxxTest::RealTestDescription( Tests_TestHeaderless, suiteDescription_TestHeaderless, 107, "test_Randomized" ) {}
 void runTest() { suite_TestHeaderless.test_Randomized(); }
} testDescription_suite_TestHeaderless_test_Randomized;

