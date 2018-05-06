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

bool suite_TestMeshManager_init = false;
#include "/mnt/home/fpre/0ad/source/graphics/tests/test_MeshManager.h"

static TestMeshManager suite_TestMeshManager;

static CxxTest::List Tests_TestMeshManager = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestMeshManager( "../../../source/graphics/tests/test_MeshManager.h", 46, "TestMeshManager", suite_TestMeshManager, Tests_TestMeshManager );

static class TestDescription_suite_TestMeshManager_test_load_pmd_with_extension : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMeshManager_test_load_pmd_with_extension() : CxxTest::RealTestDescription( Tests_TestMeshManager, suiteDescription_TestMeshManager, 126, "test_load_pmd_with_extension" ) {}
 void runTest() { suite_TestMeshManager.test_load_pmd_with_extension(); }
} testDescription_suite_TestMeshManager_test_load_pmd_with_extension;

static class TestDescription_suite_TestMeshManager_test_load_pmd_without_extension : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMeshManager_test_load_pmd_without_extension() : CxxTest::RealTestDescription( Tests_TestMeshManager, suiteDescription_TestMeshManager, 136, "test_load_pmd_without_extension" ) {}
 void runTest() { suite_TestMeshManager.test_load_pmd_without_extension(); }
} testDescription_suite_TestMeshManager_test_load_pmd_without_extension;

static class TestDescription_suite_TestMeshManager_test_caching : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMeshManager_test_caching() : CxxTest::RealTestDescription( Tests_TestMeshManager, suiteDescription_TestMeshManager, 146, "test_caching" ) {}
 void runTest() { suite_TestMeshManager.test_caching(); }
} testDescription_suite_TestMeshManager_test_caching;

static class TestDescription_suite_TestMeshManager_test_load_dae : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMeshManager_test_load_dae() : CxxTest::RealTestDescription( Tests_TestMeshManager, suiteDescription_TestMeshManager, 157, "test_load_dae" ) {}
 void runTest() { suite_TestMeshManager.test_load_dae(); }
} testDescription_suite_TestMeshManager_test_load_dae;

static class TestDescription_suite_TestMeshManager_test_load_dae_caching : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMeshManager_test_load_dae_caching() : CxxTest::RealTestDescription( Tests_TestMeshManager, suiteDescription_TestMeshManager, 167, "test_load_dae_caching" ) {}
 void runTest() { suite_TestMeshManager.test_load_dae_caching(); }
} testDescription_suite_TestMeshManager_test_load_dae_caching;

static class TestDescription_suite_TestMeshManager_test_invalid_skeletons : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMeshManager_test_invalid_skeletons() : CxxTest::RealTestDescription( Tests_TestMeshManager, suiteDescription_TestMeshManager, 181, "test_invalid_skeletons" ) {}
 void runTest() { suite_TestMeshManager.test_invalid_skeletons(); }
} testDescription_suite_TestMeshManager_test_invalid_skeletons;

static class TestDescription_suite_TestMeshManager_test_invalid_dae : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMeshManager_test_invalid_dae() : CxxTest::RealTestDescription( Tests_TestMeshManager, suiteDescription_TestMeshManager, 196, "test_invalid_dae" ) {}
 void runTest() { suite_TestMeshManager.test_invalid_dae(); }
} testDescription_suite_TestMeshManager_test_invalid_dae;

static class TestDescription_suite_TestMeshManager_test_load_nonexistent_pmd : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMeshManager_test_load_nonexistent_pmd() : CxxTest::RealTestDescription( Tests_TestMeshManager, suiteDescription_TestMeshManager, 211, "test_load_nonexistent_pmd" ) {}
 void runTest() { suite_TestMeshManager.test_load_nonexistent_pmd(); }
} testDescription_suite_TestMeshManager_test_load_nonexistent_pmd;

static class TestDescription_suite_TestMeshManager_test_load_nonexistent_dae : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMeshManager_test_load_nonexistent_dae() : CxxTest::RealTestDescription( Tests_TestMeshManager, suiteDescription_TestMeshManager, 220, "test_load_nonexistent_dae" ) {}
 void runTest() { suite_TestMeshManager.test_load_nonexistent_dae(); }
} testDescription_suite_TestMeshManager_test_load_nonexistent_dae;

static class TestDescription_suite_TestMeshManager_test_load_across_relaxng : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMeshManager_test_load_across_relaxng() : CxxTest::RealTestDescription( Tests_TestMeshManager, suiteDescription_TestMeshManager, 229, "test_load_across_relaxng" ) {}
 void runTest() { suite_TestMeshManager.test_load_across_relaxng(); }
} testDescription_suite_TestMeshManager_test_load_across_relaxng;

static class TestDescription_suite_TestMeshManager_test_load_dae_bogus_material_target : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestMeshManager_test_load_dae_bogus_material_target() : CxxTest::RealTestDescription( Tests_TestMeshManager, suiteDescription_TestMeshManager, 252, "test_load_dae_bogus_material_target" ) {}
 void runTest() { suite_TestMeshManager.test_load_dae_bogus_material_target(); }
} testDescription_suite_TestMeshManager_test_load_dae_bogus_material_target;

