#include <iostream>
#include "Descriminant.h"
#include "Vieta.h"
#include "Complex.h"

using namespace std;

int main() {
    setlocale(0, "");
    int values;

    cout << "1. Квадратное уравнение\n";
    cout << "2. Комплексные числа\n";

    cin >> values;

    switch (values) {
    case 1: {
        double a, b, c;

        cout << "Введите: a\n";
        cin >> a;
        cout << "Введите: b\n";
        cin >> b;
        cout << "Введите: c\n";
        cin >> c;

        Descriminant(a, b, c);
        Vieta(a, b, c);

        break;
    }
    case 2: {
        double z1, z2;

        cout << "Введите: z1\n";
        cin >> z1;
        cout << "Введите: z2\n";
        cin >> z2;

        Complex(z1, z2);

        break;
    }
    default:
        cout << "Выбран недопустимый параметр.\n";
        break;
    }

    cout << "\n\nНажмите Enter, чтобы выйти...";
    cin.ignore();
    cin.get();

    return 0;
}
