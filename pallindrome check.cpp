#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int rev = 0, temp = num;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == num;
}

int main() {
    int num, start, end;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a palindrome" << endl;
    else
        cout << num << " is not a palindrome" << endl;

    cout << "Enter range (start end): ";
    cin >> start >> end;
    cout << "Palindromes in range: ";
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i)) cout << i << " ";
    }
    return 0;
}

