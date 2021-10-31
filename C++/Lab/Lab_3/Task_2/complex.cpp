#include "complex.h"
#include <iostream>

using namespace std;

Complex::Complex() {
    Real = 0;
    Imaginary = 0;
}

Complex::Complex(double r, double i) {
    Real = r;
    Imaginary = i;
}

Complex Complex::operator+(Complex a) const  {
    Complex t;
    t.Real = Real + a.Real;
    t.Imaginary = Imaginary + a.Imaginary;
    return t;
}

void Complex::Print() const {
    cout << Real << endl;
    cout << Imaginary << endl;
}

Complex Complex::operator*(Complex a) const {
    Complex t;
    t.Real = Real * a.Real;
    t.Imaginary = Imaginary * a.Imaginary;
    return t;
}

bool Complex::operator!=(Complex a) const {
    return a.Real != Real || a.Imaginary != Imaginary;
}