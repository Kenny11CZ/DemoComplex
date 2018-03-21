//
// Created by kenny on 20.3.18.
//

#include <cassert>
#include <sstream>
#include "Complex.h"

void testComplex() {
    // Inicialization
    stringstream s;
    s.str("");

    // First test, << operator
    Complex c1(1,1);
    s << c1;
    assert(s.str() == "Real: 1 Imaginary: 1");
    s.str("");

    // Second test, + operator
    Complex c2 = c1 + c1;
    s << c2;
    assert(s.str() == "Real: 2 Imaginary: 2");
    s.str("");

    // Third test, is + operator const
    s << c1;
    assert(s.str() == "Real: 1 Imaginary: 1");
    s.clear();
}

int main() {
    testComplex();
}

