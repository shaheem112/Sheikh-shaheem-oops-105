#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++) if (n % i == 0) return false;
    return true;
}

bool isArmstrong(int n) {
    int temp = n, sum = 0, d, digits = 0;
    int t = n;
    while (t > 0) { digits++; t /= 10; }
    while (temp > 0) {
        d = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) power *= d;
        sum += power;
        temp /= 10;
    }
    return sum == n;
}

bool isPalindrome(int n) {
    int rev = 0, temp = n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

int main() {
    int choice, n;
    do {
        cout << "\nMenu:\n1. Factorial\n2. Prime Check\n3. Armstrong Check\n4. Palindrome Check\n5. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 5) break;

        cout << "Enter a number: ";
        cin >> n;

        switch(choice) {
            case 1: {
                long long fact = 1;
                for (int i = 1; i <= n; i++) fact *= i;
                cout << "Factorial = " << fact << endl;
                break;
            }
            case 2: cout << (isPrime(n) ? "Prime" : "Not Prime") << endl; break;
            case 3: cout << (isArmstrong(n) ? "Armstrong" : "Not Armstrong") << endl; break;
            case 4: cout << (isPalindrome(n) ? "Palindrome" : "Not Palindrome") << endl; break;
            default: cout << "Invalid choice!";
        }
    } while (choice != 5);

    return 0;
}

