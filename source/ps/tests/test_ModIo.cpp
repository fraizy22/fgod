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

bool suite_TestModIo_init = false;
#include "/mnt/home/fpre/0ad/source/ps/tests/test_ModIo.h"

static TestModIo suite_TestModIo;

static CxxTest::List Tests_TestModIo = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestModIo( "../../../source/ps/tests/test_ModIo.h", 31, "TestModIo", suite_TestModIo, Tests_TestModIo );

static class TestDescription_suite_TestModIo_test_id_parsing : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestModIo_test_id_parsing() : CxxTest::RealTestDescription( Tests_TestModIo, suiteDescription_TestModIo, 43, "test_id_parsing" ) {}
 void runTest() { suite_TestModIo.test_id_parsing(); }
} testDescription_suite_TestModIo_test_id_parsing;

static class TestDescription_suite_TestModIo_test_mods_parsing : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestModIo_test_mods_parsing() : CxxTest::RealTestDescription( Tests_TestModIo, suiteDescription_TestModIo, 91, "test_mods_parsing" ) {}
 void runTest() { suite_TestModIo.test_mods_parsing(); }
} testDescription_suite_TestModIo_test_mods_parsing;

static class TestDescription_suite_TestModIo_test_signature_parsing : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestModIo_test_signature_parsing() : CxxTest::RealTestDescription( Tests_TestModIo, suiteDescription_TestModIo, 184, "test_signature_parsing" ) {}
 void runTest() { suite_TestModIo.test_signature_parsing(); }
} testDescription_suite_TestModIo_test_signature_parsing;

