#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double weight, height, bmi;
    cout << "Enter weight in pounds: ";
    cin >> weight;
    cout << "Enter height in inches: ";
    cin >> height;

    bmi = 703 * weight / (height * height);
    cout << fixed << setprecision(1);
    cout << "BMI = " << bmi << " -> ";

    if(bmi < 18.5) cout << "Underweight";
    else if(bmi < 25.0) cout << "Normal";
    else if(bmi < 30.0) cout << "Overweight";
    else cout << "Obese";
    cout << endl;
    return 0;
}

