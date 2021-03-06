/**
 * main function
 */
#include "../Association_class/TestAssociation.h"

int main(int argc, char *argv[]) {
//  TestMembre testMembre;
    TestAssociation testAssociation;
    CppUnit::TextUi::TestRunner runner;

//    CppUnit::TestSuite *membreSuite = testMembre.make_suite();
//    runner.addTest(membreSuite);

    // create suite
    CppUnit::TestSuite *associationSuite = testAssociation.make_suite();
    runner.addTest(associationSuite);

    // set output format as text
    runner.setOutputter(new CppUnit::CompilerOutputter(&runner.result(), cout));

    // run all tests
    runner.run();

    return 0;
}
