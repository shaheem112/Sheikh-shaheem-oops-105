#include <iostream>
using namespace std;

class ExpressionEvaluator {
public:
    void run() {
        double a, b, c;
        cout << "Enter expression like (5 + 3.2 * 2.0):\n";
        cout << "Enter a, b, c respectively:\n";
        cin >> a >> b >> c;
        double result = a + b * c;
        cout << "Result after type promotion = " << result << endl;
    }
};

int main() {
    ExpressionEvaluator obj;
    obj.run();
}

