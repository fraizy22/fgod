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

bool suite_TestSysdep_init = false;
#include "/mnt/home/fpre/0ad/source/lib/sysdep/tests/test_sysdep.h"

static TestSysdep suite_TestSysdep;

static CxxTest::List Tests_TestSysdep = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSysdep( "../../../source/lib/sysdep/tests/test_sysdep.h", 37, "TestSysdep", suite_TestSysdep, Tests_TestSysdep );

static class TestDescription_suite_TestSysdep_test_random : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSysdep_test_random() : CxxTest::RealTestDescription( Tests_TestSysdep, suiteDescription_TestSysdep, 40, "test_random" ) {}
 void runTest() { suite_TestSysdep.test_random(); }
} testDescription_suite_TestSysdep_test_random;

static class TestDescription_suite_TestSysdep_test_sys_ExecutablePathname : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSysdep_test_sys_ExecutablePathname() : CxxTest::RealTestDescription( Tests_TestSysdep, suiteDescription_TestSysdep, 48, "test_sys_ExecutablePathname" ) {}
 void runTest() { suite_TestSysdep.test_sys_ExecutablePathname(); }
} testDescription_suite_TestSysdep_test_sys_ExecutablePathname;

static class TestDescription_suite_TestSysdep_test_unix_ExecutablePathname : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSysdep_test_unix_ExecutablePathname() : CxxTest::RealTestDescription( Tests_TestSysdep, suiteDescription_TestSysdep, 61, "test_unix_ExecutablePathname" ) {}
 void runTest() { suite_TestSysdep.test_unix_ExecutablePathname(); }
} testDescription_suite_TestSysdep_test_unix_ExecutablePathname;

