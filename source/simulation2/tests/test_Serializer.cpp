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

bool suite_TestSerializer_init = false;
#include "/mnt/home/fpre/0ad/source/simulation2/tests/test_Serializer.h"

static TestSerializer suite_TestSerializer;

static CxxTest::List Tests_TestSerializer = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSerializer( "../../../source/simulation2/tests/test_Serializer.h", 47, "TestSerializer", suite_TestSerializer, Tests_TestSerializer );

static class TestDescription_suite_TestSerializer_test_Debug_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_Debug_basic() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 75, "test_Debug_basic" ) {}
 void runTest() { suite_TestSerializer.test_Debug_basic(); }
} testDescription_suite_TestSerializer_test_Debug_basic;

static class TestDescription_suite_TestSerializer_test_Debug_floats : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_Debug_floats() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 86, "test_Debug_floats" ) {}
 void runTest() { suite_TestSerializer.test_Debug_floats(); }
} testDescription_suite_TestSerializer_test_Debug_floats;

static class TestDescription_suite_TestSerializer_test_Debug_types : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_Debug_types() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 117, "test_Debug_types" ) {}
 void runTest() { suite_TestSerializer.test_Debug_types(); }
} testDescription_suite_TestSerializer_test_Debug_types;

static class TestDescription_suite_TestSerializer_test_Std_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_Std_basic() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 148, "test_Std_basic" ) {}
 void runTest() { suite_TestSerializer.test_Std_basic(); }
} testDescription_suite_TestSerializer_test_Std_basic;

static class TestDescription_suite_TestSerializer_test_Std_types : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_Std_types() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 175, "test_Std_types" ) {}
 void runTest() { suite_TestSerializer.test_Std_types(); }
} testDescription_suite_TestSerializer_test_Std_types;

static class TestDescription_suite_TestSerializer_test_Hash_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_Hash_basic() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 242, "test_Hash_basic" ) {}
 void runTest() { suite_TestSerializer.test_Hash_basic(); }
} testDescription_suite_TestSerializer_test_Hash_basic;

static class TestDescription_suite_TestSerializer_test_Hash_stream : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_Hash_stream() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 256, "test_Hash_stream" ) {}
 void runTest() { suite_TestSerializer.test_Hash_stream(); }
} testDescription_suite_TestSerializer_test_Hash_stream;

static class TestDescription_suite_TestSerializer_test_bounds : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_bounds() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 279, "test_bounds" ) {}
 void runTest() { suite_TestSerializer.test_bounds(); }
} testDescription_suite_TestSerializer_test_bounds;

static class TestDescription_suite_TestSerializer_test_script_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_script_basic() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 332, "test_script_basic" ) {}
 void runTest() { suite_TestSerializer.test_script_basic(); }
} testDescription_suite_TestSerializer_test_script_basic;

static class TestDescription_suite_TestSerializer_test_script_unicode : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_script_unicode() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 382, "test_script_unicode" ) {}
 void runTest() { suite_TestSerializer.test_script_unicode(); }
} testDescription_suite_TestSerializer_test_script_unicode;

static class TestDescription_suite_TestSerializer_test_script_objects : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_script_objects() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 402, "test_script_objects" ) {}
 void runTest() { suite_TestSerializer.test_script_objects(); }
} testDescription_suite_TestSerializer_test_script_objects;

static class TestDescription_suite_TestSerializer_test_script_objects_properties : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_script_objects_properties() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 414, "test_script_objects_properties" ) {}
 void runTest() { suite_TestSerializer.test_script_objects_properties(); }
} testDescription_suite_TestSerializer_test_script_objects_properties;

static class TestDescription_suite_TestSerializer_test_script_typed_arrays_simple : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_script_typed_arrays_simple() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 419, "test_script_typed_arrays_simple" ) {}
 void runTest() { suite_TestSerializer.test_script_typed_arrays_simple(); }
} testDescription_suite_TestSerializer_test_script_typed_arrays_simple;

static class TestDescription_suite_TestSerializer_test_script_typed_arrays_complex : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_script_typed_arrays_complex() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 503, "test_script_typed_arrays_complex" ) {}
 void runTest() { suite_TestSerializer.test_script_typed_arrays_complex(); }
} testDescription_suite_TestSerializer_test_script_typed_arrays_complex;

static class TestDescription_suite_TestSerializer_test_script_map : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_script_map() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 549, "test_script_map" ) {}
 void runTest() { suite_TestSerializer.test_script_map(); }
} testDescription_suite_TestSerializer_test_script_map;

static class TestDescription_suite_TestSerializer_test_script_set : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_script_set() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 585, "test_script_set" ) {}
 void runTest() { suite_TestSerializer.test_script_set(); }
} testDescription_suite_TestSerializer_test_script_set;

static class TestDescription_suite_TestSerializer_test_script_map_nested : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_script_map_nested() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 616, "test_script_map_nested" ) {}
 void runTest() { suite_TestSerializer.test_script_map_nested(); }
} testDescription_suite_TestSerializer_test_script_map_nested;

static class TestDescription_suite_TestSerializer_test_script_set_nested : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_script_set_nested() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 696, "test_script_set_nested" ) {}
 void runTest() { suite_TestSerializer.test_script_set_nested(); }
} testDescription_suite_TestSerializer_test_script_set_nested;

static class TestDescription_suite_TestSerializer_test_script_nonfinite : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_script_nonfinite() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 720, "test_script_nonfinite" ) {}
 void runTest() { suite_TestSerializer.test_script_nonfinite(); }
} testDescription_suite_TestSerializer_test_script_nonfinite;

static class TestDescription_suite_TestSerializer_test_script_property_order : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_script_property_order() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 725, "test_script_property_order" ) {}
 void runTest() { suite_TestSerializer.test_script_property_order(); }
} testDescription_suite_TestSerializer_test_script_property_order;

static class TestDescription_suite_TestSerializer_test_script_array_sparse : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_script_array_sparse() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 731, "test_script_array_sparse" ) {}
 void runTest() { suite_TestSerializer.test_script_array_sparse(); }
} testDescription_suite_TestSerializer_test_script_array_sparse;

static class TestDescription_suite_TestSerializer_test_script_numbers : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_script_numbers() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 736, "test_script_numbers" ) {}
 void runTest() { suite_TestSerializer.test_script_numbers(); }
} testDescription_suite_TestSerializer_test_script_numbers;

static class TestDescription_suite_TestSerializer_test_script_exceptions : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_script_exceptions() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 755, "test_script_exceptions" ) {}
 void runTest() { suite_TestSerializer.test_script_exceptions(); }
} testDescription_suite_TestSerializer_test_script_exceptions;

static class TestDescription_suite_TestSerializer_test_script_splice : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializer_test_script_splice() : CxxTest::RealTestDescription( Tests_TestSerializer, suiteDescription_TestSerializer, 772, "test_script_splice" ) {}
 void runTest() { suite_TestSerializer.test_script_splice(); }
} testDescription_suite_TestSerializer_test_script_splice;

static TestSerializerPerf suite_TestSerializerPerf;

static CxxTest::List Tests_TestSerializerPerf = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestSerializerPerf( "../../../source/simulation2/tests/test_Serializer.h", 785, "TestSerializerPerf", suite_TestSerializerPerf, Tests_TestSerializerPerf );

static class TestDescription_suite_TestSerializerPerf_test_script_props_DISABLED : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializerPerf_test_script_props_DISABLED() : CxxTest::RealTestDescription( Tests_TestSerializerPerf, suiteDescription_TestSerializerPerf, 788, "test_script_props_DISABLED" ) {}
 void runTest() { suite_TestSerializerPerf.test_script_props_DISABLED(); }
} testDescription_suite_TestSerializerPerf_test_script_props_DISABLED;

static class TestDescription_suite_TestSerializerPerf_test_hash_DISABLED : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestSerializerPerf_test_hash_DISABLED() : CxxTest::RealTestDescription( Tests_TestSerializerPerf, suiteDescription_TestSerializerPerf, 823, "test_hash_DISABLED" ) {}
 void runTest() { suite_TestSerializerPerf.test_hash_DISABLED(); }
} testDescription_suite_TestSerializerPerf_test_hash_DISABLED;

