#include <iostream>
#include <algorithm>
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

    void rowSort() {
        for(int i=0; i<rows; i++)
            sort(a[i], a[i]+cols);
        cout << "\nRow-wise Sorted Matrix:\n";
        display();
    }

    void colSort() {
        for(int j=0; j<cols; j++) {
            int col[10];
            for(int i=0; i<rows; i++)
                col[i]=a[i][j];
            sort(col, col+rows);
            for(int i=0; i<rows; i++)
                a[i][j]=col[i];
        }
        cout << "\nColumn-wise Sorted Matrix:\n";
        display();
    }
};

int main() {
    Matrix m;
    m.read();
    m.rowSort();
    m.colSort();
}

