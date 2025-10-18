#include <iostream>
using namespace std;

class Cipher {
public:
    void caesarCipher(string text, int key) {
        cout << "\nCaesar Cipher:\n";
        for (char c : text) {
            cout << c << "(" << int(c) << ") -> ";
            char e = c + key;
            cout << e << "(" << int(e) << ")\n";
        }
    }

    void xorCipher(string text, char key) {
        cout << "\nXOR Cipher:\n";
        for (char c : text) {
            cout << c << "(" << int(c) << ") -> ";
            char e = c ^ key;
            cout << e << "(" << int(e) << ")\n";
        }
    }
};

int main() {
    Cipher obj;
    string text;
    cout << "Enter text: ";
    getline(cin, text);
    obj.caesarCipher(text, 3);
    obj.xorCipher(text, 'K');
}

