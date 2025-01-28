#include "Complex.h"
#include <iostream>
#include <complex>

using namespace std;

int Complex(double z1, double z2) {
    cout << "\nÌàò. îïåðàöèè ñ êîìïëåêñíûìè ÷èñëàìè \n\n";

    complex<double> c1(z1);
    complex<double> c2(z2);

    cout << "Ñëîæåíèå êîìïëåêñíûõ ÷èñåë: " << c1 + c2 << "\n";
    cout << "Ðàçíîñòü êîìïëåêñíûõ ÷èñåë: " << c1 - c2 << "\n";

    return 0;
}

//
