#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    (op == '+') ? cout << "Result: " << a + b :
    (op == '-') ? cout << "Result: " << a - b :
    (op == '*') ? cout << "Result: " << a * b :
    (op == '/' && b != 0) ? cout << "Result: " << a / b :
    (op == '%' && b != 0) ? cout << "Result: " << a % b :
    cout << "Error: Invalid operator or division by zero" << endl;

    return 0;
}

