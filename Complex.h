//
// Created by kenny on 20.3.18.
//

#ifndef DEMOCOMPLEX_COMPLEX_H
#define DEMOCOMPLEX_COMPLEX_H

#import <iostream>

using namespace std;

class Complex {
public:
    Complex(double real, double imaginary): real(real), imaginary(imaginary) {}
    Complex operator+(const Complex &c) const;


    friend ostream &operator<<(ostream &os, const Complex &complex);

    void print();

private:
    double real;
    double imaginary;
};


#endif //DEMOCOMPLEX_COMPLEX_H
