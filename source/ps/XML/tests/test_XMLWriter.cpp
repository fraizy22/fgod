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

bool suite_TestXmlWriter_init = false;
#include "/mnt/home/fpre/0ad/source/ps/XML/tests/test_XMLWriter.h"

static TestXmlWriter suite_TestXmlWriter;

static CxxTest::List Tests_TestXmlWriter = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestXmlWriter( "../../../source/ps/XML/tests/test_XMLWriter.h", 22, "TestXmlWriter", suite_TestXmlWriter, Tests_TestXmlWriter );

static class TestDescription_suite_TestXmlWriter_test1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestXmlWriter_test1() : CxxTest::RealTestDescription( Tests_TestXmlWriter, suiteDescription_TestXmlWriter, 25, "test1" ) {}
 void runTest() { suite_TestXmlWriter.test1(); }
} testDescription_suite_TestXmlWriter_test1;

static class TestDescription_suite_TestXmlWriter_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestXmlWriter_test_basic() : CxxTest::RealTestDescription( Tests_TestXmlWriter, suiteDescription_TestXmlWriter, 91, "test_basic" ) {}
 void runTest() { suite_TestXmlWriter.test_basic(); }
} testDescription_suite_TestXmlWriter_test_basic;

static class TestDescription_suite_TestXmlWriter_test_nonpretty : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestXmlWriter_test_nonpretty() : CxxTest::RealTestDescription( Tests_TestXmlWriter, suiteDescription_TestXmlWriter, 118, "test_nonpretty" ) {}
 void runTest() { suite_TestXmlWriter.test_nonpretty(); }
} testDescription_suite_TestXmlWriter_test_nonpretty;

static class TestDescription_suite_TestXmlWriter_test_text : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestXmlWriter_test_text() : CxxTest::RealTestDescription( Tests_TestXmlWriter, suiteDescription_TestXmlWriter, 141, "test_text" ) {}
 void runTest() { suite_TestXmlWriter.test_text(); }
} testDescription_suite_TestXmlWriter_test_text;

static class TestDescription_suite_TestXmlWriter_test_utf8 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestXmlWriter_test_utf8() : CxxTest::RealTestDescription( Tests_TestXmlWriter, suiteDescription_TestXmlWriter, 160, "test_utf8" ) {}
 void runTest() { suite_TestXmlWriter.test_utf8(); }
} testDescription_suite_TestXmlWriter_test_utf8;

static class TestDescription_suite_TestXmlWriter_test_attr_escape : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestXmlWriter_test_attr_escape() : CxxTest::RealTestDescription( Tests_TestXmlWriter, suiteDescription_TestXmlWriter, 179, "test_attr_escape" ) {}
 void runTest() { suite_TestXmlWriter.test_attr_escape(); }
} testDescription_suite_TestXmlWriter_test_attr_escape;

static class TestDescription_suite_TestXmlWriter_test_chardata_escape : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestXmlWriter_test_chardata_escape() : CxxTest::RealTestDescription( Tests_TestXmlWriter, suiteDescription_TestXmlWriter, 195, "test_chardata_escape" ) {}
 void runTest() { suite_TestXmlWriter.test_chardata_escape(); }
} testDescription_suite_TestXmlWriter_test_chardata_escape;

static class TestDescription_suite_TestXmlWriter_test_cdata_escape : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestXmlWriter_test_cdata_escape() : CxxTest::RealTestDescription( Tests_TestXmlWriter, suiteDescription_TestXmlWriter, 211, "test_cdata_escape" ) {}
 void runTest() { suite_TestXmlWriter.test_cdata_escape(); }
} testDescription_suite_TestXmlWriter_test_cdata_escape;

static class TestDescription_suite_TestXmlWriter_test_comment_escape : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestXmlWriter_test_comment_escape() : CxxTest::RealTestDescription( Tests_TestXmlWriter, suiteDescription_TestXmlWriter, 227, "test_comment_escape" ) {}
 void runTest() { suite_TestXmlWriter.test_comment_escape(); }
} testDescription_suite_TestXmlWriter_test_comment_escape;

