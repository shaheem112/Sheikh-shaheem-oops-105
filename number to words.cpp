#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number (0–99): ";
    cin >> num;

    if (num < 0 || num > 99) {
        cout << "Out of range!" << endl;
        return 0;
    }

    string ones[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine",
                     "Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen",
                     "Sixteen","Seventeen","Eighteen","Nineteen"};
    string tens[] = {"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

    if (num < 20)
        cout << ones[num];
    else {
        cout << tens[num / 10];
        if (num % 10 != 0) cout << " " << ones[num % 10];
    }
    cout << endl;

    return 0;
}

