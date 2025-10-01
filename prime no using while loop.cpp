#include <iostream>
using namespace std;

bool isPrime(int num){
    if(num<2) return false;
    for(int i=2;i*i<=num;i++)
        if(num%i==0) return false;
    return true;
}

int main() {
    int n, i=2;
    cout << "Enter n: ";
    cin >> n;
    cout << "Primes <= " << n << ": ";
    while(i<=n){
        if(isPrime(i)) cout << i << " ";
        i++;
    }
    cout << endl;
    return 0;
}

