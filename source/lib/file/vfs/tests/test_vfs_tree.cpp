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

bool suite_TestVfsTree_init = false;
#include "/mnt/home/fpre/0ad/source/lib/file/vfs/tests/test_vfs_tree.h"

static TestVfsTree suite_TestVfsTree;

static CxxTest::List Tests_TestVfsTree = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestVfsTree( "../../../source/lib/file/vfs/tests/test_vfs_tree.h", 46, "TestVfsTree", suite_TestVfsTree, Tests_TestVfsTree );

static class TestDescription_suite_TestVfsTree_test_replacement : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestVfsTree_test_replacement() : CxxTest::RealTestDescription( Tests_TestVfsTree, suiteDescription_TestVfsTree, 142, "test_replacement" ) {}
 void runTest() { suite_TestVfsTree.test_replacement(); }
} testDescription_suite_TestVfsTree_test_replacement;

static class TestDescription_suite_TestVfsTree_test_deleted : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestVfsTree_test_deleted() : CxxTest::RealTestDescription( Tests_TestVfsTree, suiteDescription_TestVfsTree, 161, "test_deleted" ) {}
 void runTest() { suite_TestVfsTree.test_deleted(); }
} testDescription_suite_TestVfsTree_test_deleted;

