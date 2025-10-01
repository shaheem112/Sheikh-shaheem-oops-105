#include <iostream>
using namespace std;

bool isLeap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int main() {
    int month, year;
    cout << "Enter month (1-12) and year: ";
    cin >> month >> year;

    switch (month) {
        case 1: cout << "31 days"; break;
        case 2: cout << (isLeap(year) ? "29 days" : "28 days"); break;
        case 3: cout << "31 days"; break;
        case 4: cout << "30 days"; break;
        case 5: cout << "31 days"; break;
        case 6: cout << "30 days"; break;
        case 7: cout << "31 days"; break;
        case 8: cout << "31 days"; break;
        case 9: cout << "30 days"; break;
        case 10: cout << "31 days"; break;
        case 11: cout << "30 days"; break;
        case 12: cout << "31 days"; break;
        default: cout << "Invalid month";
    }
    cout << endl;
    return 0;
}

