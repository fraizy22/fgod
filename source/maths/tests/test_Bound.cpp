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

bool suite_TestBound_init = false;
#include "/mnt/home/fpre/0ad/source/maths/tests/test_Bound.h"

static TestBound suite_TestBound;

static CxxTest::List Tests_TestBound = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestBound( "../../../source/maths/tests/test_Bound.h", 30, "TestBound", suite_TestBound, Tests_TestBound );

static class TestDescription_suite_TestBound_test_empty_aabb : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBound_test_empty_aabb() : CxxTest::RealTestDescription( Tests_TestBound, suiteDescription_TestBound, 38, "test_empty_aabb" ) {}
 void runTest() { suite_TestBound.test_empty_aabb(); }
} testDescription_suite_TestBound_test_empty_aabb;

static class TestDescription_suite_TestBound_test_empty_obb : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBound_test_empty_obb() : CxxTest::RealTestDescription( Tests_TestBound, suiteDescription_TestBound, 48, "test_empty_obb" ) {}
 void runTest() { suite_TestBound.test_empty_obb(); }
} testDescription_suite_TestBound_test_empty_obb;

static class TestDescription_suite_TestBound_test_extend_vector : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBound_test_extend_vector() : CxxTest::RealTestDescription( Tests_TestBound, suiteDescription_TestBound, 61, "test_extend_vector" ) {}
 void runTest() { suite_TestBound.test_extend_vector(); }
} testDescription_suite_TestBound_test_extend_vector;

static class TestDescription_suite_TestBound_test_extend_bound : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBound_test_extend_bound() : CxxTest::RealTestDescription( Tests_TestBound, suiteDescription_TestBound, 72, "test_extend_bound" ) {}
 void runTest() { suite_TestBound.test_extend_bound(); }
} testDescription_suite_TestBound_test_extend_bound;

static class TestDescription_suite_TestBound_test_aabb_to_obb_translation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBound_test_aabb_to_obb_translation() : CxxTest::RealTestDescription( Tests_TestBound, suiteDescription_TestBound, 84, "test_aabb_to_obb_translation" ) {}
 void runTest() { suite_TestBound.test_aabb_to_obb_translation(); }
} testDescription_suite_TestBound_test_aabb_to_obb_translation;

static class TestDescription_suite_TestBound_test_aabb_to_obb_rotation_around_origin : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBound_test_aabb_to_obb_rotation_around_origin() : CxxTest::RealTestDescription( Tests_TestBound, suiteDescription_TestBound, 101, "test_aabb_to_obb_rotation_around_origin" ) {}
 void runTest() { suite_TestBound.test_aabb_to_obb_rotation_around_origin(); }
} testDescription_suite_TestBound_test_aabb_to_obb_rotation_around_origin;

static class TestDescription_suite_TestBound_test_aabb_to_obb_rotation_around_point : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBound_test_aabb_to_obb_rotation_around_point() : CxxTest::RealTestDescription( Tests_TestBound, suiteDescription_TestBound, 119, "test_aabb_to_obb_rotation_around_point" ) {}
 void runTest() { suite_TestBound.test_aabb_to_obb_rotation_around_point(); }
} testDescription_suite_TestBound_test_aabb_to_obb_rotation_around_point;

static class TestDescription_suite_TestBound_test_aabb_to_obb_scale : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBound_test_aabb_to_obb_scale() : CxxTest::RealTestDescription( Tests_TestBound, suiteDescription_TestBound, 149, "test_aabb_to_obb_scale" ) {}
 void runTest() { suite_TestBound.test_aabb_to_obb_scale(); }
} testDescription_suite_TestBound_test_aabb_to_obb_scale;

static class TestDescription_suite_TestBound_test_degenerate_obb_ray_intersect : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBound_test_degenerate_obb_ray_intersect() : CxxTest::RealTestDescription( Tests_TestBound, suiteDescription_TestBound, 168, "test_degenerate_obb_ray_intersect" ) {}
 void runTest() { suite_TestBound.test_degenerate_obb_ray_intersect(); }
} testDescription_suite_TestBound_test_degenerate_obb_ray_intersect;

static class TestDescription_suite_TestBound_test_degenerate_aabb_to_obb_transform : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestBound_test_degenerate_aabb_to_obb_transform() : CxxTest::RealTestDescription( Tests_TestBound, suiteDescription_TestBound, 193, "test_degenerate_aabb_to_obb_transform" ) {}
 void runTest() { suite_TestBound.test_degenerate_aabb_to_obb_transform(); }
} testDescription_suite_TestBound_test_degenerate_aabb_to_obb_transform;

