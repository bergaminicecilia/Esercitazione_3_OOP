#include "ComplexNumber.hpp"
#include <iostream>
# include <cmath>
# include <limits>

ComplexNumber operator+(const ComplexNumber& z1, const ComplexNumber& z2){
    return ComplexNumber (z1.real + z2.real, z1.imag + z2.imag);
}

bool operator==(const ComplexNumber& z1, const ComplexNumber& z2){
    if (abs(z1.real - z2.real) < numeric_limits<double>::epsilon() &&
        abs(z1.imag - z2.imag) < numeric_limits<double>::epsilon())
    {
        return true;
    }
    else
    {
        return false;
    }
}

ostream& operator<<(ostream& os, const ComplexNumber& z){
    if (z.real == 0)
        os << z.imag << "i";
    else if (z.imag == 0)
        os << z.real;
    else if (z.imag < 0)
        os << z.real << z.imag << "i";
    else
        os << z.real << "+" << z.imag << "i";
    return os;
}

