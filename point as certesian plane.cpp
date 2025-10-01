#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Enter x and y coordinates: ";
    cin >> x >> y;

    if(x==0 && y==0) cout << "Point is at the origin";
    else if(x==0) cout << "Point is on the y-axis";
    else if(y==0) cout << "Point is on the x-axis";
    else if(x>0 && y>0) cout << "Quadrant I";
    else if(x<0 && y>0) cout << "Quadrant II";
    else if(x<0 && y<0) cout << "Quadrant III";
    else cout << "Quadrant IV";
    cout << endl;
    return 0;
}

