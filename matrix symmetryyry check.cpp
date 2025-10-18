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

    void checkSymmetry() {
        bool symmetric = true;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                if(a[i][j] != a[j][i])
                    symmetric = false;

        if(symmetric)
            cout << "Matrix is Symmetric.\n";
        else
            cout << "Matrix is NOT Symmetric.\n";
    }
};

int main() {
    Matrix m;
    m.read();
    m.checkSymmetry();
}

