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

bool suite_TestCmpObstructionManager_init = false;
#include "/mnt/home/fpre/0ad/source/simulation2/components/tests/test_ObstructionManager.h"

static TestCmpObstructionManager suite_TestCmpObstructionManager;

static CxxTest::List Tests_TestCmpObstructionManager = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestCmpObstructionManager( "../../../source/simulation2/components/tests/test_ObstructionManager.h", 22, "TestCmpObstructionManager", suite_TestCmpObstructionManager, Tests_TestCmpObstructionManager );

static class TestDescription_suite_TestCmpObstructionManager_test_simple_collisions : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmpObstructionManager_test_simple_collisions() : CxxTest::RealTestDescription( Tests_TestCmpObstructionManager, suiteDescription_TestCmpObstructionManager, 101, "test_simple_collisions" ) {}
 void runTest() { suite_TestCmpObstructionManager.test_simple_collisions(); }
} testDescription_suite_TestCmpObstructionManager_test_simple_collisions;

static class TestDescription_suite_TestCmpObstructionManager_test_filter_null : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmpObstructionManager_test_filter_null() : CxxTest::RealTestDescription( Tests_TestCmpObstructionManager, suiteDescription_TestCmpObstructionManager, 139, "test_filter_null" ) {}
 void runTest() { suite_TestCmpObstructionManager.test_filter_null(); }
} testDescription_suite_TestCmpObstructionManager_test_filter_null;

static class TestDescription_suite_TestCmpObstructionManager_test_filter_stationary_only : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmpObstructionManager_test_filter_stationary_only() : CxxTest::RealTestDescription( Tests_TestCmpObstructionManager, suiteDescription_TestCmpObstructionManager, 167, "test_filter_stationary_only" ) {}
 void runTest() { suite_TestCmpObstructionManager.test_filter_stationary_only(); }
} testDescription_suite_TestCmpObstructionManager_test_filter_stationary_only;

static class TestDescription_suite_TestCmpObstructionManager_test_filter_skip_tag : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmpObstructionManager_test_filter_skip_tag() : CxxTest::RealTestDescription( Tests_TestCmpObstructionManager, suiteDescription_TestCmpObstructionManager, 194, "test_filter_skip_tag" ) {}
 void runTest() { suite_TestCmpObstructionManager.test_filter_skip_tag(); }
} testDescription_suite_TestCmpObstructionManager_test_filter_skip_tag;

static class TestDescription_suite_TestCmpObstructionManager_test_filter_skip_tag_require_flag : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmpObstructionManager_test_filter_skip_tag_require_flag() : CxxTest::RealTestDescription( Tests_TestCmpObstructionManager, suiteDescription_TestCmpObstructionManager, 218, "test_filter_skip_tag_require_flag" ) {}
 void runTest() { suite_TestCmpObstructionManager.test_filter_skip_tag_require_flag(); }
} testDescription_suite_TestCmpObstructionManager_test_filter_skip_tag_require_flag;

static class TestDescription_suite_TestCmpObstructionManager_test_filter_skip_controlgroups_require_flag : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmpObstructionManager_test_filter_skip_controlgroups_require_flag() : CxxTest::RealTestDescription( Tests_TestCmpObstructionManager, suiteDescription_TestCmpObstructionManager, 275, "test_filter_skip_controlgroups_require_flag" ) {}
 void runTest() { suite_TestCmpObstructionManager.test_filter_skip_controlgroups_require_flag(); }
} testDescription_suite_TestCmpObstructionManager_test_filter_skip_controlgroups_require_flag;

static class TestDescription_suite_TestCmpObstructionManager_test_adjacent_shapes : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmpObstructionManager_test_adjacent_shapes() : CxxTest::RealTestDescription( Tests_TestCmpObstructionManager, suiteDescription_TestCmpObstructionManager, 409, "test_adjacent_shapes" ) {}
 void runTest() { suite_TestCmpObstructionManager.test_adjacent_shapes(); }
} testDescription_suite_TestCmpObstructionManager_test_adjacent_shapes;

static class TestDescription_suite_TestCmpObstructionManager_test_get_obstruction : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestCmpObstructionManager_test_get_obstruction() : CxxTest::RealTestDescription( Tests_TestCmpObstructionManager, suiteDescription_TestCmpObstructionManager, 450, "test_get_obstruction" ) {}
 void runTest() { suite_TestCmpObstructionManager.test_get_obstruction(); }
} testDescription_suite_TestCmpObstructionManager_test_get_obstruction;

