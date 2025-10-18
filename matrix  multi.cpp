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

    void multiply(Matrix m2) {
        if(cols != m2.rows) {
            cout << "Matrix multiplication not possible!" << endl;
            return;
        }
        int result[10][10] = {0};
        for(int i=0; i<rows; i++)
            for(int j=0; j<m2.cols; j++)
                for(int k=0; k<cols; k++)
                    result[i][j] += a[i][k]*m2.a[k][j];

        cout << "\nResultant Matrix:\n";
        for(int i=0; i<rows; i++) {
            for(int j=0; j<m2.cols; j++)
                cout << result[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix m1, m2;
    cout << "Enter first matrix:\n";
    m1.read();
    cout << "Enter second matrix:\n";
    m2.read();
    m1.multiply(m2);
}

