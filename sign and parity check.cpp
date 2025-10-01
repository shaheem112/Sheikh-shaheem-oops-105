#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        cout << "Zero" << endl;
    } else {
        if (num > 0) {
            (num % 2 == 0) ? cout << "Positive Even" << endl : cout << "Positive Odd" << endl;
        } else {
            (num % 2 == 0) ? cout << "Negative Even" << endl : cout << "Negative Odd" << endl;
        }
    }
    return 0;
}

