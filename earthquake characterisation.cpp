#include <iostream>
using namespace std;

int main() {
    double n;
    cout << "Enter Richter scale number: ";
    cin >> n;

    if(n < 5.0) cout << "Little or no damage";
    else if(n < 5.5) cout << "Some damage";
    else if(n < 6.5) cout << "Serious damage: walls may crack or fall";
    else if(n < 7.5) cout << "Disaster: houses and buildings may collapse";
    else cout << "Catastrophe: most buildings destroyed";
    cout << endl;
    return 0;
}

