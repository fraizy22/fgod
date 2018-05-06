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

bool suite_TestBits_init = false;
#include "/mnt/home/fpre/0ad/source/lib/tests/test_bits.h"

static TestBits suite_TestBits;

static CxxTest::List Tests_TestBits = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestBits( "../../../source/lib/tests/test_bits.h", 30, "TestBits", suite_TestBits, Tests_TestBits );

static class TestDescription_suite_TestBits_test_Bit : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBits_test_Bit() : CxxTest::RealTestDescription( Tests_TestBits, suiteDescription_TestBits, 33, "test_Bit" ) {}
 void runTest() { suite_TestBits.test_Bit(); }
} testDescription_suite_TestBits_test_Bit;

static class TestDescription_suite_TestBits_test_IsBitSet : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBits_test_IsBitSet() : CxxTest::RealTestDescription( Tests_TestBits, suiteDescription_TestBits, 43, "test_IsBitSet" ) {}
 void runTest() { suite_TestBits.test_IsBitSet(); }
} testDescription_suite_TestBits_test_IsBitSet;

static class TestDescription_suite_TestBits_test_bit_mask : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBits_test_bit_mask() : CxxTest::RealTestDescription( Tests_TestBits, suiteDescription_TestBits, 56, "test_bit_mask" ) {}
 void runTest() { suite_TestBits.test_bit_mask(); }
} testDescription_suite_TestBits_test_bit_mask;

static class TestDescription_suite_TestBits_test_bits : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBits_test_bits() : CxxTest::RealTestDescription( Tests_TestBits, suiteDescription_TestBits, 70, "test_bits" ) {}
 void runTest() { suite_TestBits.test_bits(); }
} testDescription_suite_TestBits_test_bits;

static class TestDescription_suite_TestBits_test_PopulationCount : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBits_test_PopulationCount() : CxxTest::RealTestDescription( Tests_TestBits, suiteDescription_TestBits, 87, "test_PopulationCount" ) {}
 void runTest() { suite_TestBits.test_PopulationCount(); }
} testDescription_suite_TestBits_test_PopulationCount;

static class TestDescription_suite_TestBits_test_is_pow2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBits_test_is_pow2() : CxxTest::RealTestDescription( Tests_TestBits, suiteDescription_TestBits, 105, "test_is_pow2" ) {}
 void runTest() { suite_TestBits.test_is_pow2(); }
} testDescription_suite_TestBits_test_is_pow2;

static class TestDescription_suite_TestBits_test_ceil_log2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBits_test_ceil_log2() : CxxTest::RealTestDescription( Tests_TestBits, suiteDescription_TestBits, 114, "test_ceil_log2" ) {}
 void runTest() { suite_TestBits.test_ceil_log2(); }
} testDescription_suite_TestBits_test_ceil_log2;

static class TestDescription_suite_TestBits_test_floor_log2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBits_test_floor_log2() : CxxTest::RealTestDescription( Tests_TestBits, suiteDescription_TestBits, 123, "test_floor_log2" ) {}
 void runTest() { suite_TestBits.test_floor_log2(); }
} testDescription_suite_TestBits_test_floor_log2;

static class TestDescription_suite_TestBits_test_round_up_to_pow2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBits_test_round_up_to_pow2() : CxxTest::RealTestDescription( Tests_TestBits, suiteDescription_TestBits, 130, "test_round_up_to_pow2" ) {}
 void runTest() { suite_TestBits.test_round_up_to_pow2(); }
} testDescription_suite_TestBits_test_round_up_to_pow2;

static class TestDescription_suite_TestBits_test_round_down_to_pow2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBits_test_round_down_to_pow2() : CxxTest::RealTestDescription( Tests_TestBits, suiteDescription_TestBits, 139, "test_round_down_to_pow2" ) {}
 void runTest() { suite_TestBits.test_round_down_to_pow2(); }
} testDescription_suite_TestBits_test_round_down_to_pow2;

static class TestDescription_suite_TestBits_test_round_up : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBits_test_round_up() : CxxTest::RealTestDescription( Tests_TestBits, suiteDescription_TestBits, 147, "test_round_up" ) {}
 void runTest() { suite_TestBits.test_round_up(); }
} testDescription_suite_TestBits_test_round_up;

static class TestDescription_suite_TestBits_test_round_down : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBits_test_round_down() : CxxTest::RealTestDescription( Tests_TestBits, suiteDescription_TestBits, 159, "test_round_down" ) {}
 void runTest() { suite_TestBits.test_round_down(); }
} testDescription_suite_TestBits_test_round_down;

