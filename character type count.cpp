#include <iostream>
using namespace std;

class CharCounter {
public:
    void run() {
        string s;
        cout << "Enter string: ";
        getline(cin, s);
        int up=0, low=0, dig=0, sp=0, ws=0;

        for(char c : s) {
            if(c >= 'A' && c <= 'Z') up++;
            else if(c >= 'a' && c <= 'z') low++;
            else if(c >= '0' && c <= '9') dig++;
            else if(c == ' ') ws++;
            else sp++;
        }

        cout << "Uppercase: " << up << "\nLowercase: " << low
             << "\nDigits: " << dig << "\nWhitespace: " << ws
             << "\nSpecial: " << sp << endl;
    }
};

int main() {
    CharCounter c;
    c.run();
}

