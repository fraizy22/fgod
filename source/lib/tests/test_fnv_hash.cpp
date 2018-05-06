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

bool suite_TestFnvHash_init = false;
#include "/mnt/home/fpre/0ad/source/lib/tests/test_fnv_hash.h"

static TestFnvHash suite_TestFnvHash;

static CxxTest::List Tests_TestFnvHash = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestFnvHash( "../../../source/lib/tests/test_fnv_hash.h", 27, "TestFnvHash", suite_TestFnvHash, Tests_TestFnvHash );

static class TestDescription_suite_TestFnvHash_test_fnv_hash : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestFnvHash_test_fnv_hash() : CxxTest::RealTestDescription( Tests_TestFnvHash, suiteDescription_TestFnvHash, 30, "test_fnv_hash" ) {}
 void runTest() { suite_TestFnvHash.test_fnv_hash(); }
} testDescription_suite_TestFnvHash_test_fnv_hash;

