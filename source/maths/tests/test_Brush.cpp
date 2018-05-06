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

bool suite_TestBrush_init = false;
#include "/mnt/home/fpre/0ad/source/maths/tests/test_Brush.h"

static TestBrush suite_TestBrush;

static CxxTest::List Tests_TestBrush = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestBrush( "../../../source/maths/tests/test_Brush.h", 24, "TestBrush", suite_TestBrush, Tests_TestBrush );

static class TestDescription_suite_TestBrush_test_slice_empty_brush : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBrush_test_slice_empty_brush() : CxxTest::RealTestDescription( Tests_TestBrush, suiteDescription_TestBrush, 37, "test_slice_empty_brush" ) {}
 void runTest() { suite_TestBrush.test_slice_empty_brush(); }
} testDescription_suite_TestBrush_test_slice_empty_brush;

static class TestDescription_suite_TestBrush_test_slice_plane_simple : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBrush_test_slice_plane_simple() : CxxTest::RealTestDescription( Tests_TestBrush, suiteDescription_TestBrush, 48, "test_slice_plane_simple" ) {}
 void runTest() { suite_TestBrush.test_slice_plane_simple(); }
} testDescription_suite_TestBrush_test_slice_plane_simple;

static class TestDescription_suite_TestBrush_test_slice_plane_behind_brush : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBrush_test_slice_plane_behind_brush() : CxxTest::RealTestDescription( Tests_TestBrush, suiteDescription_TestBrush, 78, "test_slice_plane_behind_brush" ) {}
 void runTest() { suite_TestBrush.test_slice_plane_behind_brush(); }
} testDescription_suite_TestBrush_test_slice_plane_behind_brush;

static class TestDescription_suite_TestBrush_test_slice_plane_in_front_of_brush : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBrush_test_slice_plane_in_front_of_brush() : CxxTest::RealTestDescription( Tests_TestBrush, suiteDescription_TestBrush, 108, "test_slice_plane_in_front_of_brush" ) {}
 void runTest() { suite_TestBrush.test_slice_plane_in_front_of_brush(); }
} testDescription_suite_TestBrush_test_slice_plane_in_front_of_brush;

