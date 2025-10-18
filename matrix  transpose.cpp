#include <iostream>
using namespace std;

class Matrix {
    int rows, cols;
    int a[10][10];
public:
    void read() {
        cout << "Enter rows and columns: ";
        cin >> rows >> cols;
        cout << "Enter elements:\n";
        for(int i=0; i<rows; i++)
            for(int j=0; j<cols; j++)
                cin >> a[i][j];
    }

    void display() {
        for(int i=0; i<rows; i++) {
            for(int j=0; j<cols; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }

    void transpose() {
        cout << "\nTranspose of the Matrix:\n";
        for(int i=0; i<cols; i++) {
            for(int j=0; j<rows; j++)
                cout << a[j][i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix m;
    m.read();
    cout << "\nOriginal Matrix:\n";
    m.display();
    m.transpose();
}

