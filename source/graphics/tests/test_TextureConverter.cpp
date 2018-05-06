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

bool suite_TestTextureConverter_init = false;
#include "/mnt/home/fpre/0ad/source/graphics/tests/test_TextureConverter.h"

static TestTextureConverter suite_TestTextureConverter;

static CxxTest::List Tests_TestTextureConverter = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestTextureConverter( "../../../source/graphics/tests/test_TextureConverter.h", 27, "TestTextureConverter", suite_TestTextureConverter, Tests_TestTextureConverter );

static class TestDescription_suite_TestTextureConverter_test_convert_quality : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestTextureConverter_test_convert_quality() : CxxTest::RealTestDescription( Tests_TestTextureConverter, suiteDescription_TestTextureConverter, 48, "test_convert_quality" ) {}
 void runTest() { suite_TestTextureConverter.test_convert_quality(); }
} testDescription_suite_TestTextureConverter_test_convert_quality;

