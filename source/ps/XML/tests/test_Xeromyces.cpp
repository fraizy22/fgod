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

bool suite_TestXeromyces_init = false;
#include "/mnt/home/fpre/0ad/source/ps/XML/tests/test_Xeromyces.h"

static TestXeromyces suite_TestXeromyces;

static CxxTest::List Tests_TestXeromyces = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestXeromyces( "../../../source/ps/XML/tests/test_Xeromyces.h", 24, "TestXeromyces", suite_TestXeromyces, Tests_TestXeromyces );

static class TestDescription_suite_TestXeromyces_test_LoadString : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestXeromyces_test_LoadString() : CxxTest::RealTestDescription( Tests_TestXeromyces, suiteDescription_TestXeromyces, 40, "test_LoadString" ) {}
 void runTest() { suite_TestXeromyces.test_LoadString(); }
} testDescription_suite_TestXeromyces_test_LoadString;

static class TestDescription_suite_TestXeromyces_test_LoadString_invalid : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestXeromyces_test_LoadString_invalid() : CxxTest::RealTestDescription( Tests_TestXeromyces, suiteDescription_TestXeromyces, 47, "test_LoadString_invalid" ) {}
 void runTest() { suite_TestXeromyces.test_LoadString_invalid(); }
} testDescription_suite_TestXeromyces_test_LoadString_invalid;

