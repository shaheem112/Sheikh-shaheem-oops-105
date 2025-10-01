#include <iostream>
using namespace std;

int main() {
    int marks[5], sum = 0;
    cout << "Enter 5 subject marks: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        sum += marks[i];
    }

    double percentage = sum / 5.0;

    if (percentage >= 90)
        cout << "Grade A (Distinction)" << endl;
    else if (percentage >= 75)
        cout << "Grade B (First Division)" << endl;
    else if (percentage >= 60)
        cout << "Grade C (Second Division)" << endl;
    else if (percentage >= 40)
        cout << "Grade D (Pass)" << endl;
    else
        cout << "Fail" << endl;

    return 0;
}

