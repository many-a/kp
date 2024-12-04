#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {

    int values;
    double a, b, c;

    cout << "1. Quadratic equation\n";
    cout << "2. Complex numbers\n";
    cin >> values;
    
    switch (values) {

        case 1:
            cout << "Enter: a\n";
            cin >> a;
            cout << "Enter: b\n";
            cin >> b;
            cout << "Enter: c\n";
            cin >> c;

            

            cout << "Discriminant - Decision\n";
            cout << "Formula: D=b^2-4ac\n\n";
            double d = b * b - 4 * a * c;
            cout << "D=" << b << "^2" << "-" << "4" << "*" << a << "*" << c << "=" << d << "\n" << "\n";
            
            if (d > 0) {

                cout << "Discriminant > 0, 2 dicision" << "\n";
                
                double x1 = (- b + sqrt(d)) / (2 * a);
                double x2 = (- b - sqrt(d)) / (2 * a);

                cout << "\n" << "x1= " << x1 << "\n" << "x2= " << x2;
            }
            else if (d == 0) {

                cout << "Discriminant = 0, 1 dicision";

                double x = (-b) / 2 * a;

                cout << "\n" << "x=" << x;
            }
            else {
                
                cout << "Equation 0";

            }
            break; 
    }
                 
}
