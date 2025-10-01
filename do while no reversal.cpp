#include <iostream>
using namespace std;

int main() {
    int num;
    do {
        cout << "Enter a positive number (0 to exit): ";
        cin >> num;
        if(num==0) break;
        int rev=0, temp=num;
        while(temp!=0){
            rev = rev*10 + temp%10;
            temp/=10;
        }
        cout << "Reversed: " << rev << endl;
    } while(num!=0);
    return 0;
}

