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

bool suite_TestByteOrder_init = false;
#include "/mnt/home/fpre/0ad/source/lib/tests/test_byte_order.h"

static TestByteOrder suite_TestByteOrder;

static CxxTest::List Tests_TestByteOrder = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestByteOrder( "../../../source/lib/tests/test_byte_order.h", 27, "TestByteOrder", suite_TestByteOrder, Tests_TestByteOrder );

static class TestDescription_suite_TestByteOrder_test_conversion : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestByteOrder_test_conversion() : CxxTest::RealTestDescription( Tests_TestByteOrder, suiteDescription_TestByteOrder, 30, "test_conversion" ) {}
 void runTest() { suite_TestByteOrder.test_conversion(); }
} testDescription_suite_TestByteOrder_test_conversion;

static class TestDescription_suite_TestByteOrder_test_movzx : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestByteOrder_test_movzx() : CxxTest::RealTestDescription( Tests_TestByteOrder, suiteDescription_TestByteOrder, 64, "test_movzx" ) {}
 void runTest() { suite_TestByteOrder.test_movzx(); }
} testDescription_suite_TestByteOrder_test_movzx;

static class TestDescription_suite_TestByteOrder_test_movsx : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestByteOrder_test_movsx() : CxxTest::RealTestDescription( Tests_TestByteOrder, suiteDescription_TestByteOrder, 82, "test_movsx" ) {}
 void runTest() { suite_TestByteOrder.test_movsx(); }
} testDescription_suite_TestByteOrder_test_movsx;

