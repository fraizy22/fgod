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

bool suite_TestParamNode_init = false;
#include "/mnt/home/fpre/0ad/source/simulation2/tests/test_ParamNode.h"

static TestParamNode suite_TestParamNode;

static CxxTest::List Tests_TestParamNode = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestParamNode( "../../../source/simulation2/tests/test_ParamNode.h", 25, "TestParamNode", suite_TestParamNode, Tests_TestParamNode );

static class TestDescription_suite_TestParamNode_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestParamNode_test_basic() : CxxTest::RealTestDescription( Tests_TestParamNode, suiteDescription_TestParamNode, 38, "test_basic" ) {}
 void runTest() { suite_TestParamNode.test_basic(); }
} testDescription_suite_TestParamNode_test_basic;

static class TestDescription_suite_TestParamNode_test_attrs : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestParamNode_test_attrs() : CxxTest::RealTestDescription( Tests_TestParamNode, suiteDescription_TestParamNode, 66, "test_attrs" ) {}
 void runTest() { suite_TestParamNode.test_attrs(); }
} testDescription_suite_TestParamNode_test_attrs;

static class TestDescription_suite_TestParamNode_test_ToXML : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestParamNode_test_ToXML() : CxxTest::RealTestDescription( Tests_TestParamNode, suiteDescription_TestParamNode, 82, "test_ToXML" ) {}
 void runTest() { suite_TestParamNode.test_ToXML(); }
} testDescription_suite_TestParamNode_test_ToXML;

static class TestDescription_suite_TestParamNode_test_overlay_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestParamNode_test_overlay_basic() : CxxTest::RealTestDescription( Tests_TestParamNode, suiteDescription_TestParamNode, 89, "test_overlay_basic" ) {}
 void runTest() { suite_TestParamNode.test_overlay_basic(); }
} testDescription_suite_TestParamNode_test_overlay_basic;

static class TestDescription_suite_TestParamNode_test_overlay_disable : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestParamNode_test_overlay_disable() : CxxTest::RealTestDescription( Tests_TestParamNode, suiteDescription_TestParamNode, 97, "test_overlay_disable" ) {}
 void runTest() { suite_TestParamNode.test_overlay_disable(); }
} testDescription_suite_TestParamNode_test_overlay_disable;

static class TestDescription_suite_TestParamNode_test_overlay_replace : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestParamNode_test_overlay_replace() : CxxTest::RealTestDescription( Tests_TestParamNode, suiteDescription_TestParamNode, 105, "test_overlay_replace" ) {}
 void runTest() { suite_TestParamNode.test_overlay_replace(); }
} testDescription_suite_TestParamNode_test_overlay_replace;

static class TestDescription_suite_TestParamNode_test_overlay_tokens : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestParamNode_test_overlay_tokens() : CxxTest::RealTestDescription( Tests_TestParamNode, suiteDescription_TestParamNode, 113, "test_overlay_tokens" ) {}
 void runTest() { suite_TestParamNode.test_overlay_tokens(); }
} testDescription_suite_TestParamNode_test_overlay_tokens;

static class TestDescription_suite_TestParamNode_test_overlay_remove_nonexistent_token : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestParamNode_test_overlay_remove_nonexistent_token() : CxxTest::RealTestDescription( Tests_TestParamNode, suiteDescription_TestParamNode, 121, "test_overlay_remove_nonexistent_token" ) {}
 void runTest() { suite_TestParamNode.test_overlay_remove_nonexistent_token(); }
} testDescription_suite_TestParamNode_test_overlay_remove_nonexistent_token;

static class TestDescription_suite_TestParamNode_test_overlay_remove_empty_token : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestParamNode_test_overlay_remove_empty_token() : CxxTest::RealTestDescription( Tests_TestParamNode, suiteDescription_TestParamNode, 130, "test_overlay_remove_empty_token" ) {}
 void runTest() { suite_TestParamNode.test_overlay_remove_empty_token(); }
} testDescription_suite_TestParamNode_test_overlay_remove_empty_token;

static class TestDescription_suite_TestParamNode_test_overlay_filtered : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestParamNode_test_overlay_filtered() : CxxTest::RealTestDescription( Tests_TestParamNode, suiteDescription_TestParamNode, 138, "test_overlay_filtered" ) {}
 void runTest() { suite_TestParamNode.test_overlay_filtered(); }
} testDescription_suite_TestParamNode_test_overlay_filtered;

static class TestDescription_suite_TestParamNode_test_overlay_merge : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestParamNode_test_overlay_merge() : CxxTest::RealTestDescription( Tests_TestParamNode, suiteDescription_TestParamNode, 151, "test_overlay_merge" ) {}
 void runTest() { suite_TestParamNode.test_overlay_merge(); }
} testDescription_suite_TestParamNode_test_overlay_merge;

static class TestDescription_suite_TestParamNode_test_overlay_filtered_merge : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestParamNode_test_overlay_filtered_merge() : CxxTest::RealTestDescription( Tests_TestParamNode, suiteDescription_TestParamNode, 159, "test_overlay_filtered_merge" ) {}
 void runTest() { suite_TestParamNode.test_overlay_filtered_merge(); }
} testDescription_suite_TestParamNode_test_overlay_filtered_merge;

static class TestDescription_suite_TestParamNode_test_types : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestParamNode_test_types() : CxxTest::RealTestDescription( Tests_TestParamNode, suiteDescription_TestParamNode, 167, "test_types" ) {}
 void runTest() { suite_TestParamNode.test_types(); }
} testDescription_suite_TestParamNode_test_types;

static class TestDescription_suite_TestParamNode_test_escape : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestParamNode_test_escape() : CxxTest::RealTestDescription( Tests_TestParamNode, suiteDescription_TestParamNode, 180, "test_escape" ) {}
 void runTest() { suite_TestParamNode.test_escape(); }
} testDescription_suite_TestParamNode_test_escape;

