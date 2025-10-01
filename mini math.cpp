#include <iostream>
using namespace std;

int main() {
    double balance = 1000; // initial balance
    int choice;
    do {
        cout << "\nATM Menu:\n1. Balance Inquiry\n2. Cash Withdrawal\n3. Cash Deposit\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Balance = Rs. " << balance << endl;
                break;
            case 2: {
                double amt;
                cout << "Enter withdrawal amount: ";
                cin >> amt;
                if (amt <= balance) {
                    balance -= amt;
                    cout << "Withdrawal Successful. New Balance = Rs. " << balance << endl;
                } else {
                    cout << "Insufficient Balance!" << endl;
                }
                break;
            }
            case 3: {
                double amt;
                cout << "Enter deposit amount: ";
                cin >> amt;
                balance += amt;
                cout << "Deposit Successful. New Balance = Rs. " << balance << endl;
                break;
            }
            case 4: cout << "Exiting ATM..." << endl; break;
            default: cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}

