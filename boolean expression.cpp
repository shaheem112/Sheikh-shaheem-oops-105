#include <iostream>
using namespace std;

int main() {
    bool a,b,c;
    cout << "Enter 0/1 for a, b, c: ";
    cin >> a >> b >> c;

    cout << "AND: " << (a && b && c) << endl;
    cout << "OR: " << (a || b || c) << endl;
    cout << "XOR (a^b^c): " << (a^b^c) << endl;
    cout << "NOT a: " << (!a) << endl;

    // Truth table for 3 variables
    cout << "\nTruth Table for AND:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                cout << i << " " << j << " " << k << " -> " << (i&&j&&k) << endl;
            }
        }
    }
    return 0;
}

