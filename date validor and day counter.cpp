#include <iostream>
using namespace std;

bool isLeap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int main() {
    int d, m, y;
    cout << "Enter date (DD MM YYYY): ";
    cin >> d >> m >> y;

    int daysInMonth[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (isLeap(y)) daysInMonth[2] = 29;

    if (m < 1 || m > 12 || d < 1 || d > daysInMonth[m]) {
        cout << "Invalid date" << endl;
        return 0;
    }

    // Zeller’s Congruence for day of week
    int q = d;
    int mm = (m < 3) ? m + 12 : m;
    int yy = (m < 3) ? y - 1 : y;
    int k = yy % 100;
    int j = yy / 100;
    int h = (q + (13*(mm+1))/5 + k + k/4 + j/4 + 5*j) % 7;

    switch(h) {
        case 0: cout << "Saturday"; break;
        case 1: cout << "Sunday"; break;
        case 2: cout << "Monday"; break;
        case 3: cout << "Tuesday"; break;
        case 4: cout << "Wednesday"; break;
        case 5: cout << "Thursday"; break;
        case 6: cout << "Friday"; break;
    }
    cout << endl;

    return 0;
}

