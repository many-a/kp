#include "Complex.h"
#include <iostream>
#include <complex>

using namespace std;

int Complex(double z1, double z2) {
    cout << "\n���. �������� � ������������ ������� \n\n";

    complex<double> c1(z1);
    complex<double> c2(z2);

    cout << "�������� ����������� �����: " << c1 + c2 << "\n";
    cout << "�������� ����������� �����: " << c1 - c2 << "\n";

    return 0;
}
