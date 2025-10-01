#include <iostream>
using namespace std;

int main() {
    double balance = 0;
    int choice;
    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Balance Inquiry\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch(choice) {
            case 1: {
                double amt;
                cout << "Enter deposit amount: ";
                cin >> amt;
                balance += amt;
                break;
            }
            case 2: {
                double amt;
                cout << "Enter withdrawal amount: ";
                cin >> amt;
                if (amt <= balance) balance -= amt;
                else cout << "Insufficient balance!" << endl;
                break;
            }
            case 3:
                cout << "Current balance: " << balance << endl;
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);
    return 0;
}

