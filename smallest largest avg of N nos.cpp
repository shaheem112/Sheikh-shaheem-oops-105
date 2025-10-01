#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of elements: ";
    cin >> N;

    int num, smallest, largest;
    double sum = 0;

    cout << "Enter " << N << " numbers:\n";
    for (int i = 0; i < N; i++) {
        cin >> num;
        if (i == 0) {
            smallest = largest = num;
        }
        if (num < smallest) smallest = num;
        if (num > largest) largest = num;
        sum += num;
    }

    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;
    cout << "Average = " << sum / N << endl;

    return 0;
}

