#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cout << "Enter number of elements: ";
    cin >> N;

    int num, smallest, largest;
    double sum = 0, sum_squares = 0;

    cout << "Enter " << N << " numbers:\n";
    for (int i = 0; i < N; i++) {
        cin >> num;
        if (i == 0) {
            smallest = largest = num;
        }
        if (num < smallest) smallest = num;
        if (num > largest) largest = num;
        sum += num;
        sum_squares += num * num;
    }

    double mean = sum / N;
    double variance = (sum_squares / N) - (mean * mean);
    double stddev = sqrt(variance);

    cout << "Range = " << largest - smallest << endl;
    cout << "Standard Deviation = " << stddev << endl;

    return 0;
}

