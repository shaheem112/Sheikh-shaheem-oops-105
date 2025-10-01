#include <iostream>
using namespace std;

int main() {
    string text;
    int key;
    cout << "Enter text: ";
    cin.ignore(); // To ignore leftover newline
    getline(cin,text);
    cout << "Enter key for Caesar/XOR: ";
    cin >> key;

    // Caesar Cipher
    string caesar=text;
    for(int i=0;i<caesar.length();i++){
        caesar[i] = char(int(caesar[i]+key));
    }
    cout << "Caesar Cipher: " << caesar << endl;

    // XOR Encryption
    string xorEnc=text;
    for(int i=0;i<xorEnc.length();i++){
        xorEnc[i] = xorEnc[i]^key;
    }
    cout << "XOR Encryption: ";
    for(char ch:xorEnc) cout << int(ch) << " ";
    cout << endl;

    return 0;
}

