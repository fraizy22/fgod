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

bool suite_TestObjectToIDMap_init = false;
#include "/mnt/home/fpre/0ad/source/scriptinterface/tests/test_ObjectToIDMap.h"

static TestObjectToIDMap suite_TestObjectToIDMap;

static CxxTest::List Tests_TestObjectToIDMap = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestObjectToIDMap( "../../../source/scriptinterface/tests/test_ObjectToIDMap.h", 24, "TestObjectToIDMap", suite_TestObjectToIDMap, Tests_TestObjectToIDMap );

static class TestDescription_suite_TestObjectToIDMap_test_movinggc : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestObjectToIDMap_test_movinggc() : CxxTest::RealTestDescription( Tests_TestObjectToIDMap, suiteDescription_TestObjectToIDMap, 27, "test_movinggc" ) {}
 void runTest() { suite_TestObjectToIDMap.test_movinggc(); }
} testDescription_suite_TestObjectToIDMap_test_movinggc;

