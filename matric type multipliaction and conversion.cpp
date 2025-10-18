#include <iostream>
using namespace std;

class MatrixOps {
public:
    void run() {
        int a[2][2], b[2][2];
        cout << "Enter 2x2 integer matrices A and B:\n";
        for (int i=0;i<2;i++) for(int j=0;j<2;j++) cin >> a[i][j];
        for (int i=0;i<2;i++) for(int j=0;j<2;j++) cin >> b[i][j];

        float af[2][2], bf[2][2];
        double ad[2][2], bd[2][2];
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++){
                af[i][j]=a[i][j]; bf[i][j]=b[i][j];
                ad[i][j]=a[i][j]; bd[i][j]=b[i][j];
            }

        float cf[2][2]={0}; double cd[2][2]={0};
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                for(int k=0;k<2;k++){
                    cf[i][j]+=af[i][k]*bf[k][j];
                    cd[i][j]+=ad[i][k]*bd[k][j];
                }

        cout << "Float result:\n";
        for(int i=0;i<2;i++){ for(int j=0;j<2;j++) cout<<cf[i][j]<<" "; cout<<endl; }
        cout << "Double result:\n";
        for(int i=0;i<2;i++){ for(int j=0;j<2;j++) cout<<cd[i][j]<<" "; cout<<endl; }
    }
};

int main() {
    MatrixOps m;
    m.run();
}

