#include <iostream>
#include <iomanip>   
using namespace std;

double oldPoundsToDecimalPounds(int pounds, int shillings, int pence) {
 
    double Decimal_shillings = static_cast<double>(shillings) / 20.0;  //20 shillings to a pound
    double decimal_pence = static_cast<double>(pence) / (20.0 * 12.0);

    double total_Pounds = pounds + Decimal_shillings + decimal_pence;
    return total_Pounds;
}

int main() {
    int pounds, shillings, pence;

    cout << "Enter pounds: ";
    cin >> pounds;

    cout << "Enter shillings: ";
    cin >> shillings;

    cout << "Enter pence: ";
    cin >> pence;

    double decimalPounds = oldPoundsToDecimalPounds(pounds, shillings, pence);

    cout << "Decimal pounds = £"  << setprecision(3) <<  decimalPounds  << endl;

    return 0;
}
