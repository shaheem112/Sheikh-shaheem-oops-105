#include <iostream>
using namespace std;

int main() {
    int temp;
    int hot = 0, pleasant = 0, cold = 0;

    cout << "Enter daily high temperatures (enter -1 to stop):\n";
    while (true) {
        cin >> temp;
        if (temp == -1) break;

        if (temp >= 85) {
            cout << temp << " = Hot Day\n";
            hot++;
        } else if (temp >= 60) {
            cout << temp << " = Pleasant Day\n";
            pleasant++;
        } else {
            cout << temp << " = Cold Day\n";
            cold++;
        }
    }

    cout << "\nHot Days = " << hot;
    cout << "\nPleasant Days = " << pleasant;
    cout << "\nCold Days = " << cold << endl;

    return 0;
}

