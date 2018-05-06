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

bool suite_TestMD5_init = false;
#include "/mnt/home/fpre/0ad/source/maths/tests/test_MD5.h"

static TestMD5 suite_TestMD5;

static CxxTest::List Tests_TestMD5 = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMD5( "../../../source/maths/tests/test_MD5.h", 22, "TestMD5", suite_TestMD5, Tests_TestMD5 );

static class TestDescription_suite_TestMD5_test_rfc : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMD5_test_rfc() : CxxTest::RealTestDescription( Tests_TestMD5, suiteDescription_TestMD5, 44, "test_rfc" ) {}
 void runTest() { suite_TestMD5.test_rfc(); }
} testDescription_suite_TestMD5_test_rfc;

static class TestDescription_suite_TestMD5_test_align : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMD5_test_align() : CxxTest::RealTestDescription( Tests_TestMD5, suiteDescription_TestMD5, 57, "test_align" ) {}
 void runTest() { suite_TestMD5.test_align(); }
} testDescription_suite_TestMD5_test_align;

static class TestDescription_suite_TestMD5_test_align_long : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMD5_test_align_long() : CxxTest::RealTestDescription( Tests_TestMD5, suiteDescription_TestMD5, 70, "test_align_long" ) {}
 void runTest() { suite_TestMD5.test_align_long(); }
} testDescription_suite_TestMD5_test_align_long;

static class TestDescription_suite_TestMD5_test_padding : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMD5_test_padding() : CxxTest::RealTestDescription( Tests_TestMD5, suiteDescription_TestMD5, 86, "test_padding" ) {}
 void runTest() { suite_TestMD5.test_padding(); }
} testDescription_suite_TestMD5_test_padding;

static class TestDescription_suite_TestMD5_test_chunks : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMD5_test_chunks() : CxxTest::RealTestDescription( Tests_TestMD5, suiteDescription_TestMD5, 95, "test_chunks" ) {}
 void runTest() { suite_TestMD5.test_chunks(); }
} testDescription_suite_TestMD5_test_chunks;

