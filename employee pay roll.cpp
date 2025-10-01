#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    int id, hours;
    double rate, gross, net, total = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Employee ID: ";
        cin >> id;
        cout << "Enter hourly rate: ";
        cin >> rate;
        cout << "Enter hours worked: ";
        cin >> hours;

        if (hours > 40)
            gross = 40 * rate + (hours - 40) * 1.5 * rate;
        else
            gross = hours * rate;

        net = gross - (gross * 0.03625);

        cout << "Employee " << id << " Net Pay = " << net << endl;
        total += net;
    }

    cout << "\nTotal Payroll = " << total << endl;
    cout << "Average Pay = " << total / n << endl;

    return 0;
}

