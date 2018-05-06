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

bool suite_TestEncryptionPkcs5Pbkd2_init = false;
#include "/mnt/home/fpre/0ad/source/third_party/encryption/tests/test_pkcs5_pbkdf5.h"

static TestEncryptionPkcs5Pbkd2 suite_TestEncryptionPkcs5Pbkd2;

static CxxTest::List Tests_TestEncryptionPkcs5Pbkd2 = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_TestEncryptionPkcs5Pbkd2( "../../../source/third_party/encryption/tests/test_pkcs5_pbkdf5.h", 22, "TestEncryptionPkcs5Pbkd2", suite_TestEncryptionPkcs5Pbkd2, Tests_TestEncryptionPkcs5Pbkd2 );

static class TestDescription_suite_TestEncryptionPkcs5Pbkd2_test_pkcs5_pbkd2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_TestEncryptionPkcs5Pbkd2_test_pkcs5_pbkd2() : CxxTest::RealTestDescription( Tests_TestEncryptionPkcs5Pbkd2, suiteDescription_TestEncryptionPkcs5Pbkd2, 25, "test_pkcs5_pbkd2" ) {}
 void runTest() { suite_TestEncryptionPkcs5Pbkd2.test_pkcs5_pbkd2(); }
} testDescription_suite_TestEncryptionPkcs5Pbkd2_test_pkcs5_pbkd2;

