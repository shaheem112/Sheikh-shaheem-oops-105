#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter 4 integers: ";
    cin >> a >> b >> c >> d;

    int largest = (a > b) ? ((a > c) ? ((a > d) ? a : d) : ((c > d) ? c : d))
                          : ((b > c) ? ((b > d) ? b : d) : ((c > d) ? c : d));

    int smallest = (a < b) ? ((a < c) ? ((a < d) ? a : d) : ((c < d) ? c : d))
                            : ((b < c) ? ((b < d) ? b : d) : ((c < d) ? c : d));

    cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest << endl;
    return 0;
}

