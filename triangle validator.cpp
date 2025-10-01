#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "Valid Triangle" << endl;

        if (a == b && b == c) cout << "Equilateral" << endl;
        else if (a == b || b == c || a == c) cout << "Isosceles" << endl;
        else cout << "Scalene" << endl;

        if (a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
            cout << "Right-Angled Triangle" << endl;
    } else {
        cout << "Invalid Triangle" << endl;
    }
    return 0;
}

