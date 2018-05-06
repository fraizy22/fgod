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

bool suite_TestNetComms_init = false;
#include "/mnt/home/fpre/0ad/source/network/tests/test_Net.h"

static TestNetComms suite_TestNetComms;

static CxxTest::List Tests_TestNetComms = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestNetComms( "../../../source/network/tests/test_Net.h", 37, "TestNetComms", suite_TestNetComms, Tests_TestNetComms );

static class TestDescription_suite_TestNetComms_test_basic_DISABLED : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestNetComms_test_basic_DISABLED() : CxxTest::RealTestDescription( Tests_TestNetComms, suiteDescription_TestNetComms, 134, "test_basic_DISABLED" ) {}
 void runTest() { suite_TestNetComms.test_basic_DISABLED(); }
} testDescription_suite_TestNetComms_test_basic_DISABLED;

static class TestDescription_suite_TestNetComms_test_rejoin_DISABLED : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestNetComms_test_rejoin_DISABLED() : CxxTest::RealTestDescription( Tests_TestNetComms, suiteDescription_TestNetComms, 202, "test_rejoin_DISABLED" ) {}
 void runTest() { suite_TestNetComms.test_rejoin_DISABLED(); }
} testDescription_suite_TestNetComms_test_rejoin_DISABLED;

