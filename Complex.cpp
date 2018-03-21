//
// Created by kenny on 20.3.18.
//

#include "Complex.h"

Complex Complex::operator+(const Complex &c) const {
    return Complex(this->real+c.real, this->imaginary+c.imaginary);
}

void Complex::print() {
    cout << "Real: " << real << " Imaginary: " << imaginary << endl;
}

ostream &operator<<(ostream &os, const Complex &complex) {
    os << "Real: " << complex.real << " Imaginary: " << complex.imaginary;
    return os;
}
