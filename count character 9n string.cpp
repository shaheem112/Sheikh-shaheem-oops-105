#include <iostream>
using namespace std;

int main(){
    string str;
    cout << "Enter text: ";
    cin.ignore();
    getline(cin,str);

    int upper=0,lower=0,digits=0,space=0,special=0;
    for(char ch:str){
        if(ch>='A' && ch<='Z') upper++;
        else if(ch>='a' && ch<='z') lower++;
        else if(ch>='0' && ch<='9') digits++;
        else if(ch==' ' || ch=='\t') space++;
        else special++;
    }

    cout << "Uppercase: " << upper << ", Lowercase: " << lower << ", Digits: " << digits;
    cout << ", Space: " << space << ", Special: " << special << endl;
    return 0;
}

