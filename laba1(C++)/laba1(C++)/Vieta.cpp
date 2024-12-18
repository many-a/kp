#include "Vieta.h"
#include <iostream>
#include <cmath>

using namespace std;

int Vieta(double a, double b, double c) {
    cout << "\n\nВиета - Решение\n\n";
    cout << "Формула: x^2 + pX + q = 0\n\n";

    bool found = false;
    double x1, x2;

    for (double x2 = -1000; x2 <= 1000; x2 += 0.001) {
        if (x2 == 0) continue;

        x1 = c / (a * x2);

        if (fabs(x1 + x2 + b / a) < 1e-6 && fabs(x1 * x2 - c / a) < 1e-6) {
            found = true;

            cout << "Корни найдены:\n";
            cout << "x1 = " << x1 << "\n";
            cout << "x2 = " << x2 << "\n";

            break;
        }
    }

    if (!found) {
        cout << "Корней нет\n";
    }
    return 0;
}
