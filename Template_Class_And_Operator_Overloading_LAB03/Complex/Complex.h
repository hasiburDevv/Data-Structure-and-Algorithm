#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex {
private:
    double Real, Imaginary; // two parts of complex number real and imaginary
public:
    Complex(); // constructor with no argument
    Complex(double, double); // constructor with two argument

    Complex operator+ (Complex); // Complex --> return type, operator+ --> function name, (Complex) --> argument as a Complex
    Complex operator* (Complex); // overloading "*" operator
    bool operator!= (Complex); // overloading "!=" operator
    void Print();
};
#endif // COMPLEX_H_INCLUDED
