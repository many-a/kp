#include "Descriminant.h"
#include <iostream>
#include <cmath>

using namespace std;

int Descriminant(double a, double b, double c) {
    double d, x1, x2;

    cout << "������������ - �������\n";
    cout << "�������: D=b^2-4ac\n\n";

    if (a == 0) {
        cout << "��� �� ���������� ��������� (a = 0)\n";
        return -1;
    }

    d = b * b - 4 * a * c;

    cout << "D=" << b << "^2" << "-" << "4" << "*" << a << "*" << c << "=" << d << "\n" << "\n";

    if (d > 0) {
        cout << "������������ > 0, 2 �����" << "\n";

        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);

        cout << "\n" << "x1= " << x1 << "\n" << "x2= " << x2;

    }
    else if (d == 0) {
        cout << "������������ = 0, 1 ������";

        double x = (-b) / (2 * a);

        cout << "\n" << "x=" << x;

    }
    else {
        cout << "������ ��� (0)";
    }

    return 0;
}
