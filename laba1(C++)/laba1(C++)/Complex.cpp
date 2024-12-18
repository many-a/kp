#include "Complex.h"
#include <iostream>
#include <complex>

using namespace std;

int Complex(double z1, double z2) {
    cout << "\nМат. операции с комплексными числами \n\n";

    complex<double> c1(z1);
    complex<double> c2(z2);

    cout << "Сложение комплексных чисел: " << c1 + c2 << "\n";
    cout << "Разность комплексных чисел: " << c1 - c2 << "\n";

    return 0;
}
