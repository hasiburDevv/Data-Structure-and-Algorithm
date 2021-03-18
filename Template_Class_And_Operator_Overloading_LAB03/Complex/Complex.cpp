#include "Complex.h"
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
Complex Complex::operator+(Complex a) {
    Complex obj;
    obj.Real = Real + a.Real;
    obj.Imaginary = Imaginary + a.Imaginary;

    return obj;
}

Complex Complex::operator*(Complex a) {
    Complex obj;
    obj.Real = Real * a.Real;
    obj.Imaginary = Imaginary * a.Imaginary;

    return obj;
}

bool Complex::operator!=(Complex a) { // given object a
    bool t = false;
    if(Real == a.Real && Imaginary == a.Imaginary) { // a + bi == c + di
        t = true;
    }

    return t;
}

void Complex::Print() {
    cout <<"Real = "<< Real <<"; Imaginary = "<< Imaginary << endl;
}


