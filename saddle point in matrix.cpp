#include <iostream>
using namespace std;

class Matrix {
    int n, m;
    int a[10][10];
public:
    void read() {
        cout << "Enter rows and columns: ";
        cin >> n >> m;
        cout << "Enter elements:\n";
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                cin >> a[i][j];
    }

    void saddlePoint() {
        bool found=false;
        for(int i=0; i<n; i++) {
            int rowMin=a[i][0], colIndex=0;
            for(int j=1; j<m; j++)
                if(a[i][j] < rowMin) { rowMin=a[i][j]; colIndex=j; }

            bool isSaddle=true;
            for(int k=0; k<n; k++)
                if(a[k][colIndex] > rowMin)
                    isSaddle=false;

            if(isSaddle) {
                cout << "Saddle Point: " << rowMin << " at (" << i+1 << "," << colIndex+1 << ")\n";
                found=true;
            }
        }
        if(!found) cout << "No Saddle Point found.\n";
    }
};

int main() {
    Matrix m;
    m.read();
    m.saddlePoint();
}

