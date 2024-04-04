#include <cmath>
#include <iostream>
using namespace std;

struct ComplexNumber
{
    double real;
    double imag;

    ComplexNumber (double a, double b):
        real(a),
        imag(b){}

    ComplexNumber coniug()
    {
        return ComplexNumber(real, -imag);
    }
};

ComplexNumber operator+(const ComplexNumber& z1, const ComplexNumber& z2);

bool operator==(const ComplexNumber& z1, const ComplexNumber& z2);

ostream& operator<<(ostream& os, const ComplexNumber& z);


