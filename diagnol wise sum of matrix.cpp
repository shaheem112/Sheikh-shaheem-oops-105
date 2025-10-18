#include <iostream>
using namespace std;

class Matrix {
    int n;
    int a[10][10];
public:
    void read() {
        cout << "Enter size of square matrix: ";
        cin >> n;
        cout << "Enter elements:\n";
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin >> a[i][j];
    }

    void diagonalSum() {
        int mainSum=0, secSum=0;
        for(int i=0; i<n; i++) {
            mainSum += a[i][i];
            secSum += a[i][n-i-1];
        }
        cout << "Main Diagonal Sum = " << mainSum << endl;
        cout << "Secondary Diagonal Sum = " << secSum << endl;
    }
};

int main() {
    Matrix m;
    m.read();
    m.diagonalSum();
}

