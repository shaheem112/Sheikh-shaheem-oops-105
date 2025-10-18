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

    void spiralPrint() {
        int top=0, bottom=rows-1, left=0, right=cols-1;
        cout << "Spiral Order: ";
        while(top<=bottom && left<=right) {
            for(int i=left; i<=right; i++) cout << a[top][i] << " ";
            top++;
            for(int i=top; i<=bottom; i++) cout << a[i][right] << " ";
            right--;
            if(top<=bottom) for(int i=right; i>=left; i--) cout << a[bottom][i] << " ";
            bottom--;
            if(left<=right) for(int i=bottom; i>=top; i--) cout << a[i][left] << " ";
            left++;
        }
        cout << endl;
    }
};

int main() {
    Matrix m;
    m.read();
    m.spiralPrint();
}

