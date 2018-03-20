#include <iostream>
#include "Complex.h"


int main() {
    Complex c1(10, 20);
    Complex c2(5, 5);
    Complex c3 = c1 + c2;
    cout << "C1" << endl;
    c1.print();
    cout << "C2" << endl;
    c2.print();
    cout << "C1+C2" << endl;
    c3.print();

    // Definitely lost
    cout << "Definitely lost" << endl;
    Complex *c4 = new Complex(1, 1);
    c4->print();
    c4 = new Complex(0, 0);
    c4->print();
    delete c4;

    // Invalid read
    cout << "Invalid read" << endl;
    int *arr = new int[2];
    cout << arr[0] << arr[1] << arr[2] << endl;
    // Invalid write
    cout << "Invalid write" << endl;
    arr[2] = 1;

    delete[] arr;

    return 0;
}