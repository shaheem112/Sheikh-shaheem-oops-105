#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double total, discountedTotal, discount = 0, salesTax;
    char isTeacher;
    
    cout << "Enter total purchase amount: $";
    cin >> total;
    cout << "Are you a teacher? (Y/N): ";
    cin >> isTeacher;

    if (isTeacher == 'Y' || isTeacher == 'y') {
        if(total >= 100) discount = 0.12 * total;
        else discount = 0.10 * total;
        discountedTotal = total - discount;
        salesTax = 0.05 * discountedTotal;
        cout << fixed << setprecision(2);
        cout << "Total purchases      $" << total << endl;
        cout << "Teacher's discount (" << (discount/total)*100 << "%)  " << discount << endl;
        cout << "Discounted total     " << discountedTotal << endl;
        cout << "Sales tax (5%)       " << salesTax << endl;
        cout << "Total               $" << discountedTotal + salesTax << endl;
    } else {
        salesTax = 0.05 * t*

