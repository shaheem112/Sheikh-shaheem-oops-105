#include <iostream>
using namespace std;

class BooleanEvaluator {
public:
    bool AND(bool a, bool b) { return a && b; }
    bool OR(bool a, bool b) { return a || b; }
    bool XOR(bool a, bool b) { return a ^ b; }
    bool NOT(bool a) { return !a; }

    void run() {
        bool a, b;
        cout << "Enter two boolean values (0 or 1): ";
        cin >> a >> b;
        cout << "A AND B = " << AND(a, b) << endl;
        cout << "A OR B  = " << OR(a, b) << endl;
        cout << "A XOR B = " << XOR(a, b) << endl;
        cout << "NOT A   = " << NOT(a) << endl;
        cout << "NOT B   = " << NOT(b) << endl;
    }

    void truthTable() {
        cout << "\nTruth Table for A, B, C:\n";
        cout << "A B C | (A AND B) OR C\n";
        for (int a = 0; a <= 1; a++)
            for (int b = 0; b <= 1; b++)
                for (int c = 0; c <= 1; c++)
                    cout << a << " " << b << " " << c << " | " << ((a && b) || c) << endl;
    }
};

int main() {
    BooleanEvaluator obj;
    obj.run();
    obj.truthTable();
}

