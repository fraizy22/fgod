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

bool suite_TestRandom_init = false;
#include "/mnt/home/fpre/0ad/source/maths/tests/test_Random.h"

static TestRandom suite_TestRandom;

static CxxTest::List Tests_TestRandom = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRandom( "../../../source/maths/tests/test_Random.h", 22, "TestRandom", suite_TestRandom, Tests_TestRandom );

static class TestDescription_suite_TestRandom_test_sequence : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestRandom_test_sequence() : CxxTest::RealTestDescription( Tests_TestRandom, suiteDescription_TestRandom, 25, "test_sequence" ) {}
 void runTest() { suite_TestRandom.test_sequence(); }
} testDescription_suite_TestRandom_test_sequence;

static class TestDescription_suite_TestRandom_test_seed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestRandom_test_seed() : CxxTest::RealTestDescription( Tests_TestRandom, suiteDescription_TestRandom, 51, "test_seed" ) {}
 void runTest() { suite_TestRandom.test_seed(); }
} testDescription_suite_TestRandom_test_seed;

static class TestDescription_suite_TestRandom_test_comparable : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestRandom_test_comparable() : CxxTest::RealTestDescription( Tests_TestRandom, suiteDescription_TestRandom, 75, "test_comparable" ) {}
 void runTest() { suite_TestRandom.test_comparable(); }
} testDescription_suite_TestRandom_test_comparable;

static class TestDescription_suite_TestRandom_test_stream : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestRandom_test_stream() : CxxTest::RealTestDescription( Tests_TestRandom, suiteDescription_TestRandom, 97, "test_stream" ) {}
 void runTest() { suite_TestRandom.test_stream(); }
} testDescription_suite_TestRandom_test_stream;

