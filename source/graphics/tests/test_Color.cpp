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

bool suite_TestColor_init = false;
#include "/mnt/home/fpre/0ad/source/graphics/tests/test_Color.h"

static TestColor suite_TestColor;

static CxxTest::List Tests_TestColor = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestColor( "../../../source/graphics/tests/test_Color.h", 22, "TestColor", suite_TestColor, Tests_TestColor );

static class TestDescription_suite_TestColor_test_Color4ub : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestColor_test_Color4ub() : CxxTest::RealTestDescription( Tests_TestColor, suiteDescription_TestColor, 30, "test_Color4ub" ) {}
 void runTest() { suite_TestColor.test_Color4ub(); }
} testDescription_suite_TestColor_test_Color4ub;

