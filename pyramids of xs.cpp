#include <iostream>
using namespace std;

int main() {
    int height = 20;

    for (int i = 1; i <= height; i++) {
        for (int s = height; s > i; s--) cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) cout << "X";
        cout << endl;
    }

    return 0;
}

