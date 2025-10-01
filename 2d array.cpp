#include <iostream>
using namespace std;

int main(){
    int n=2;
    int A[2][2]={{1,2},{3,4}};
    float B[2][2];
    double C[2][2];

    // Convert to float
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) B[i][j]=A[i][j];

    // Convert to double
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) C[i][j]=A[i][j];

    // Matrix multiplication (int * int)
    int D[2][2]={0};
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++) D[i][j]+=A[i][k]*A[k][j];

    cout << "Matrix multiplication (int):\n";
    for(int i=0;i<n;i++){ for(int j=0;j<n;j++) cout << D[i][j] << " "; cout << endl;}
    return 0;
}

