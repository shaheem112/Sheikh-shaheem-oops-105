#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                cout << year << " is a leap year" << endl;
            else {
                cout << year << " is not a leap year" << endl;
                cout << "Next 5 leap years: ";
                int count = 0, next = year + 1;
                while (count < 5) {
                    if ((next % 4 == 0 && next % 100 != 0) || (next % 400 == 0)) {
                        cout << next << " ";
                        count++;
                    }
                    next++;
                }
            }
        } else
            cout << year << " is a leap year" << endl;
    } else {
        cout << year << " is not a leap year" << endl;
        cout << "Next 5 leap years: ";
        int count = 0, next = year + 1;
        while (count < 5) {
            if ((next % 4 == 0 && next % 100 != 0) || (next % 400 == 0)) {
                cout << next << " ";
                count++;
            }
            next++;
        }
    }

    return 0;
}

