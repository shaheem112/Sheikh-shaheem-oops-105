#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int total = 0, failedSubjects = 0;

    // Input marks for 5 subjects
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for subject " << i + 1 << " (out of 100): ";
        cin >> marks[i];
        total += marks[i];
        if (marks[i] < 40) {   // assuming <40 means fail
            failedSubjects++;
        }
    }

    // If failed in more than one subject ? Repeat Year
    if (failedSubjects > 1) {
        cout << "Repeat Year" << endl;
    } else {
        // Calculate percentage
        double percentage = (total / 500.0) * 100;

        // Assign grade using nested if-else
        if (percentage >= 85) {
            cout << "Grade: A" << endl;
        } else {
            if (percentage >= 70) {
                cout << "Grade: B" << endl;
            } else {
                if (percentage >= 55) {
                    cout << "Grade: C" << endl;
                } else {
                    if (percentage >= 40) {
                        cout << "Grade: D" << endl;
                    } else {
                        cout << "Grade: F" << endl;
                    }
                }
            }
        }
    }

    return 0;
}

