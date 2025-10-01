#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for(int x=0; x<=sqrt(n); x++){
        for(int y=0; y<=sqrt(n); y++){
            if(x*x + y*y == n) cout << "(" << x << "," << y << ")\n";
        }
    }
    return 0;
}

