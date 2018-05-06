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

bool suite_TestTraceEntry_init = false;
#include "/mnt/home/fpre/0ad/source/lib/file/common/tests/test_trace.h"

static TestTraceEntry suite_TestTraceEntry;

static CxxTest::List Tests_TestTraceEntry = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestTraceEntry( "../../../source/lib/file/common/tests/test_trace.h", 27, "TestTraceEntry", suite_TestTraceEntry, Tests_TestTraceEntry );

static class TestDescription_suite_TestTraceEntry_test_entry : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestTraceEntry_test_entry() : CxxTest::RealTestDescription( Tests_TestTraceEntry, suiteDescription_TestTraceEntry, 30, "test_entry" ) {}
 void runTest() { suite_TestTraceEntry.test_entry(); }
} testDescription_suite_TestTraceEntry_test_entry;

static class TestDescription_suite_TestTraceEntry_test_maxpath : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestTraceEntry_test_maxpath() : CxxTest::RealTestDescription( Tests_TestTraceEntry, suiteDescription_TestTraceEntry, 64, "test_maxpath" ) {}
 void runTest() { suite_TestTraceEntry.test_maxpath(); }
} testDescription_suite_TestTraceEntry_test_maxpath;

