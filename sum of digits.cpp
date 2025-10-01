#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, product = 1;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit;
        product *= digit;
        temp /= 10;
    }

    cout << "Sum of digits = " << sum << endl;
    cout << "Product of digits = " << product << endl;
    return 0;
}

