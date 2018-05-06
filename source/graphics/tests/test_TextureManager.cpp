/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_EH
#include "precompiled.h"
#include "lib/external_libraries/libsdl.h"
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>

bool suite_TestTextureManager_init = false;
#include "/mnt/home/fpre/0ad/source/graphics/tests/test_TextureManager.h"

static TestTextureManager suite_TestTextureManager;

static CxxTest::List Tests_TestTextureManager = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestTextureManager( "../../../source/graphics/tests/test_TextureManager.h", 28, "TestTextureManager", suite_TestTextureManager, Tests_TestTextureManager );

static class TestDescription_suite_TestTextureManager_test_load_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestTextureManager_test_load_basic() : CxxTest::RealTestDescription( Tests_TestTextureManager, suiteDescription_TestTextureManager, 57, "test_load_basic" ) {}
 void runTest() { suite_TestTextureManager.test_load_basic(); }
} testDescription_suite_TestTextureManager_test_load_basic;

static class TestDescription_suite_TestTextureManager_test_load_formats : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestTextureManager_test_load_formats() : CxxTest::RealTestDescription( Tests_TestTextureManager, suiteDescription_TestTextureManager, 101, "test_load_formats" ) {}
 void runTest() { suite_TestTextureManager.test_load_formats(); }
} testDescription_suite_TestTextureManager_test_load_formats;

