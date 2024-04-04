# include <iostream>
# include "ComplexNumber.hpp"
using namespace std;

int main()
{
    ComplexNumber z1(1,2);
    ComplexNumber z2(1,-2);

    cout << "z1=" << z1 << endl;
    cout << "z2=" << z2 << endl;

    ComplexNumber sum = z1+z2;
    cout << "La somma di z1 + z2 = " << sum << endl;

    if (z1 == z2){
        cout << "I numeri complessi sono uguali." << endl;
    } else {
        cout << "I numeri complessi sono diversi." << endl;
    }

    ComplexNumber z1_ = z1.coniug();
    ComplexNumber z2_ = z2.coniug();
    cout << "coniugato di z1=" << z1 << "è z1_=" << z1_ << endl;
    cout << "coniugato di z2=" << z2 << "è z2_=" << z2_ << endl;
    return 0;
}
