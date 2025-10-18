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

    void findMinMax() {
        int max=a[0][0], min=a[0][0];
        int maxPos[2]={0,0}, minPos[2]={0,0};
        for(int i=0; i<rows; i++)
            for(int j=0; j<cols; j++) {
                if(a[i][j] > max) { max=a[i][j]; maxPos[0]=i; maxPos[1]=j; }
                if(a[i][j] < min) { min=a[i][j]; minPos[0]=i; minPos[1]=j; }
            }
        cout << "Maximum: " << max << " at (" << maxPos[0]+1 << "," << maxPos[1]+1 << ")\n";
        cout << "Minimum: " << min << " at (" << minPos[0]+1 << "," << minPos[1]+1 << ")\n";
    }
};

int main() {
    Matrix m;
    m.read();
    m.findMinMax();
}

