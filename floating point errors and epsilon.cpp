#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

class FloatErrorDemo {
public:
    void run() {
        float a, b, c;
        cout << "Enter a, b, c: ";
        cin >> a >> b >> c;
        float res1 = (a * b) / c;
        float res2 = (a / c) * b;
        cout << "(a*b)/c = " << res1 << "\n(a/c)*b = " << res2 << endl;
        cout << "Difference = " << fabs(res1 - res2) << endl;

        cout << "Float epsilon: " << numeric_limits<float>::epsilon() << endl;
        cout << "Double epsilon: " << numeric_limits<double>::epsilon() << endl;
    }
};

int main() {
    FloatErrorDemo obj;
    obj.run();
}

