#include <iostream>
#include <cmath>   // for sqrt and pow

using namespace std;

int main() {
    double real1, imag1, real2, imag2;

    // Input for first complex number
    cout << "Enter real part of first complex number: ";
    cin >> real1;
    cout << "Enter imaginary part of first complex number: ";
    cin >> imag1;

    // Input for second complex number
    cout << "Enter real part of second complex number: ";
    cin >> real2;
    cout << "Enter imaginary part of second complex number: ";
    cin >> imag2;

    // Calculate magnitudes
    double mag1 = sqrt(pow(real1, 2) + pow(imag1, 2));
    double mag2 = sqrt(pow(real2, 2) + pow(imag2, 2));

    // Compare magnitudes
    if (fabs(mag1 - mag2) < 1e-9) { // considering floating-point precision
        cout << "Equal" << endl;
    } else if (mag1 > mag2) {
        cout << "First complex number has higher magnitude." << endl;
    } else {
        cout << "Second complex number has higher magnitude." << endl;
    }

    return 0;
}

