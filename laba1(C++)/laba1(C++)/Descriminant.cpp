#include "Descriminant.h"
#include <iostream>
#include <cmath>

using namespace std;

int Descriminant(double a, double b, double c) {
    double d, x1, x2;

    cout << "Дискриминант - Решение\n";
    cout << "Формула: D=b^2-4ac\n\n";

    if (a == 0) {
        cout << "Это не квадратное уравнение (a = 0)\n";
        return -1;
    }

    d = b * b - 4 * a * c;

    cout << "D=" << b << "^2" << "-" << "4" << "*" << a << "*" << c << "=" << d << "\n" << "\n";

    if (d > 0) {
        cout << "Дискриминант > 0, 2 корня" << "\n";

        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);

        cout << "\n" << "x1= " << x1 << "\n" << "x2= " << x2;

    }
    else if (d == 0) {
        cout << "Дискриминант = 0, 1 корень";

        double x = (-b) / (2 * a);

        cout << "\n" << "x=" << x;

    }
    else {
        cout << "Корней нет (0)";
    }

    return 0;
}
