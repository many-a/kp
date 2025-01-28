#include <iostream>
#include "Descriminant.h"
#include "Vieta.h"
#include "Complex.h"

using namespace std;

int main() {
    setlocale(0, "");
    int values;

    cout << "1. ���������� ���������\n";
    cout << "2. ����������� �����\n";

    cin >> values;

    switch (values) {
    case 1: {
        double a, b, c;

        cout << "�������: a\n";
        cin >> a;
        cout << "�������: b\n";
        cin >> b;
        cout << "�������: c\n";
        cin >> c;

        Descriminant(a, b, c);
        Vieta(a, b, c);

        break;
    }
    case 2: {
        double z1, z2;

        cout << "�������: z1\n";
        cin >> z1;
        cout << "�������: z2\n";
        cin >> z2;

        Complex(z1, z2);

        break;
    }
    default:
        cout << "������ ������������ ��������.\n";
        break;
    }

    cout << "\n\n������� Enter, ����� �����...";
    cin.ignore();
    cin.get();

    return 0;
}
