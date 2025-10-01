\#include <iostream>
using namespace std;

int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}

int gcd(int a,int b){ return b==0?a:gcd(b,a%b); }
int lcm(int a,int b){ return (a*b)/gcd(a,b); }

int main(){
    int choice;
    do{
        cout << "Menu:\n1.Factorial\n2.GCD\n3.LCM\n4.Exit\nEnter choice: ";
        cin >> choice;
        if(choice==1){ int n; cout << "Enter n: "; cin >> n; cout << "Factorial = " << factorial(n) << endl; }
        else if(choice==2){ int a,b; cout << "Enter two numbers: "; cin >> a >> b; cout << "GCD = " << gcd(a,b) << endl; }
        else if(choice==3){ int a,b; cout << "Enter two numbers: "; cin >> a >> b; cout << "LCM = " << lcm(a,b) << endl; }
    }while(choice!=4);
    return 0;
}

