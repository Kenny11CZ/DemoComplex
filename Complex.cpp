//
// Created by kenny on 20.3.18.
//

#include "Complex.h"

Complex Complex::operator+(const Complex &c) const {
    return Complex(this->real+c.real, this->imaginary+c.imaginary);
}

void Complex::print() {
    cout << "Real: " << this->real << " "
         << "Imaginary: " << this->imaginary
         << endl << endl;
}
