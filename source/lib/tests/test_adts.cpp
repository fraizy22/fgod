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

bool suite_TestRingbuf_init = false;
#include "/mnt/home/fpre/0ad/source/lib/tests/test_adts.h"

static TestRingbuf suite_TestRingbuf;

static CxxTest::List Tests_TestRingbuf = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestRingbuf( "../../../source/lib/tests/test_adts.h", 28, "TestRingbuf", suite_TestRingbuf, Tests_TestRingbuf );

static class TestDescription_suite_TestRingbuf_test_insert_remove : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestRingbuf_test_insert_remove() : CxxTest::RealTestDescription( Tests_TestRingbuf, suiteDescription_TestRingbuf, 33, "test_insert_remove" ) {}
 void runTest() { suite_TestRingbuf.test_insert_remove(); }
} testDescription_suite_TestRingbuf_test_insert_remove;

static class TestDescription_suite_TestRingbuf_test_fill_overwrite_old : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestRingbuf_test_fill_overwrite_old() : CxxTest::RealTestDescription( Tests_TestRingbuf, suiteDescription_TestRingbuf, 45, "test_fill_overwrite_old" ) {}
 void runTest() { suite_TestRingbuf.test_fill_overwrite_old(); }
} testDescription_suite_TestRingbuf_test_fill_overwrite_old;

static class TestDescription_suite_TestRingbuf_test_randomized_insert_remove : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestRingbuf_test_randomized_insert_remove() : CxxTest::RealTestDescription( Tests_TestRingbuf, suiteDescription_TestRingbuf, 62, "test_randomized_insert_remove" ) {}
 void runTest() { suite_TestRingbuf.test_randomized_insert_remove(); }
} testDescription_suite_TestRingbuf_test_randomized_insert_remove;

