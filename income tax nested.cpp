#include <iostream>
using namespace std;

int main() {
    double income, tax = 0;
    cout << "Enter your annual income: ";
    cin >> income;

    if(income <= 250000) tax = 0;
    else if(income <= 500000) tax = 0.05*(income - 250000);
    else if(income <= 1000000) tax = 12500 + 0.2*(income - 500000);
    else tax = 112500 + 0.3*(income - 1000000);

    cout << "Tax amount = ?" << tax << endl;
    return 0;
}

