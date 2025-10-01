#include <iostream>
using namespace std;

int main(){
    float C;
    cout << "Enter Celsius: ";
    cin >> C;

    float F = C*9/5 + 32;
    float K = C + 273.15;

    double Fd = double(C)*9/5 + 32;
    double Kd = double(C)+273.15;

    cout << "Float -> F: " << F << ", K: " << K << endl;
    cout << "Double -> F: " << Fd << ", K: " << Kd << endl;

    return 0;
}

