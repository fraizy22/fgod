/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include "precompiled.h"
#include "lib/external_libraries/libsdl.h"
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>

bool suite_TestScriptConversions_init = false;
#include "/mnt/home/fpre/0ad/source/scriptinterface/tests/test_ScriptConversions.h"

static TestScriptConversions suite_TestScriptConversions;

static CxxTest::List Tests_TestScriptConversions = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestScriptConversions( "../../../source/scriptinterface/tests/test_ScriptConversions.h", 31, "TestScriptConversions", suite_TestScriptConversions, Tests_TestScriptConversions );

static class TestDescription_suite_TestScriptConversions_test_roundtrip : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestScriptConversions_test_roundtrip() : CxxTest::RealTestDescription( Tests_TestScriptConversions, suiteDescription_TestScriptConversions, 114, "test_roundtrip" ) {}
 void runTest() { suite_TestScriptConversions.test_roundtrip(); }
} testDescription_suite_TestScriptConversions_test_roundtrip;

static class TestDescription_suite_TestScriptConversions_test_integers : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestScriptConversions_test_integers() : CxxTest::RealTestDescription( Tests_TestScriptConversions, suiteDescription_TestScriptConversions, 178, "test_integers" ) {}
 void runTest() { suite_TestScriptConversions.test_integers(); }
} testDescription_suite_TestScriptConversions_test_integers;

static class TestDescription_suite_TestScriptConversions_test_nonfinite : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestScriptConversions_test_nonfinite() : CxxTest::RealTestDescription( Tests_TestScriptConversions, suiteDescription_TestScriptConversions, 207, "test_nonfinite" ) {}
 void runTest() { suite_TestScriptConversions.test_nonfinite(); }
} testDescription_suite_TestScriptConversions_test_nonfinite;

static class TestDescription_suite_TestScriptConversions_test_fixed : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestScriptConversions_test_fixed() : CxxTest::RealTestDescription( Tests_TestScriptConversions, suiteDescription_TestScriptConversions, 226, "test_fixed" ) {}
 void runTest() { suite_TestScriptConversions.test_fixed(); }
} testDescription_suite_TestScriptConversions_test_fixed;

static class TestDescription_suite_TestScriptConversions_test_vector2d : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestScriptConversions_test_vector2d() : CxxTest::RealTestDescription( Tests_TestScriptConversions, suiteDescription_TestScriptConversions, 243, "test_vector2d" ) {}
 void runTest() { suite_TestScriptConversions.test_vector2d(); }
} testDescription_suite_TestScriptConversions_test_vector2d;

static class TestDescription_suite_TestScriptConversions_test_vector3d : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestScriptConversions_test_vector3d() : CxxTest::RealTestDescription( Tests_TestScriptConversions, suiteDescription_TestScriptConversions, 252, "test_vector3d" ) {}
 void runTest() { suite_TestScriptConversions.test_vector3d(); }
} testDescription_suite_TestScriptConversions_test_vector3d;

