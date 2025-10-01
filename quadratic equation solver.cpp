#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    (a == 0) ? cout << "Invalid equation (a cannot be zero)" << endl :
    (
        [&]() {
            double d = b*b - 4*a*c;
            if (d > 0) cout << "Roots are real and distinct" << endl;
            else if (d == 0) cout << "Roots are real and equal" << endl;
            else cout << "Roots are imaginary" << endl;
        }()
    );

    return 0;
}

