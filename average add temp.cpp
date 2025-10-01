#include <iostream>
using namespace std;

int main() {
    int temp;
    int hot = 0, pleasant = 0, cold = 0, count = 0, sum = 0;

    cout << "Enter daily high temperatures (enter -1 to stop):\n";
    while (true) {
        cin >> temp;
        if (temp == -1) break;

        sum += temp;
        count++;

        if (temp >= 85) hot++;
        else if (temp >= 60) pleasant++;
        else cold++;
    }

    cout << "\nHot Days = " << hot;
    cout << "\nPleasant Days = " << pleasant;
    cout << "\nCold Days = " << cold;
    cout << "\nAverage Temperature = " << (double)sum / count << endl;

    return 0;
}

