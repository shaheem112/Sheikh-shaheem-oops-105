#include <iostream>
using namespace std;

int main() {
    int pollutant;
    double grams;
    long odometer;
    double limit;

    cout << "(1) Carbon monoxide\n(2) Hydrocarbons\n(3) Nitrogen oxides\n(4) Nonmethane hydrocarbons\n";
    cout << "Enter pollutant number>> ";
    cin >> pollutant;
    cout << "Enter grams emitted per mile>> ";
    cin >> grams;
    cout << "Enter odometer reading>> ";
    cin >> odometer;

    // Determine limit based on pollutant and mileage
    if(odometer <= 50000){
        switch(pollutant){
            case 1: limit=3.4; break;
            case 2: limit=0.31; break;
            case 3: limit=0.4; break;
            case 4: limit=0.25; break;
        }
    } else {
        switch(pollutant){
            case 1: limit=4.2; break;
            case 2: limit=0.39; break;
            case 3: limit=0.5; break;
            case 4: limit=0.31; break;
        }
    }

    if(grams > limit) cout << "Emissions exceed permitted level of " << limit << " grams/mile." << endl;
    else cout << "Emissions are within the permitted level." << endl;

    return 0;
}

