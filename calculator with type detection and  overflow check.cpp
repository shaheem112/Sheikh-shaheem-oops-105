#include <iostream>
#include <limits>
#include <cmath>
using namespace std;

class Calculator {
public:
    void run() {
        double a, b;
        char op;
        cout << "Enter a, operator, b: ";
        cin >> a >> op >> b;

        double result = 0;
        switch (op) {
            case '+': result = a + b; break;
            case '-': result = a - b; break;
            case '*': result = a * b; break;
            case '/': result = (b != 0) ? a / b : NAN; break;
            case '%': result = fmod(a, b); break;
            default: cout << "Invalid operator"; return;
        }

        cout << "Result = " << result << endl;

        if (fabs(result) > numeric_limits<int>::max())
            cout << "?? Overflow for int type!\n";
        if (fabs(result) > numeric_limits<float>::max())
            cout << "?? Overflow for float type!\n";
    }
};

int main() {
    Calculator c;
    c.run();
}

