#ifndef TEST_ASSOCIATION_H
#define TEST_ASSOCIATION_H

/*
#include "cppunit/TestCase.h"
#include "cppunit/TestFixture.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestResult.h"
#include "cppunit/TestSuite.h"
#include "cppunit/CompilerOutputter.h"
#include "cppunit/XmlOutputter.h"
#include "cppunit/ui/text/TestRunner.h"
*/

#include <string>
#include <vector>

#include "../Test/TestUnit.h"
#include "Association.hpp"

using namespace std;

// Use those macros and repeat the class name three times in
// CLASS_NAME, CLASS_NAME_STRING
#define CLASS_NAME Association
#define CLASS_NAME_STRING "Association"
#define OUTPUT_XML_FILE "output.xml"

/*
#define TEST_DECL(x) void test_##x()
#define TEST_ADD(name) \
	suite->addTest(new CppUnit::TestCaller<TestAssociation>("test_"#name, \
		&TestAssociation::test_##name));
*/

class TestAssociation : public CppUnit::TestFixture {
private:
    string nom;
    string lieu;
    vector<Membre> vm;
    vector<Consultant*>vc;

public:
    TestAssociation();
    virtual ~TestAssociation();

    void setUp();
    void tearDown();

    CppUnit::TestSuite * make_suite();

    TEST_DECL(Association);
    TEST_DECL(ajouterMembre);
    TEST_DECL(supprimerMembre);
    TEST_DECL(fail);

};

#endif /* TEST_ASSOCIATION_H */