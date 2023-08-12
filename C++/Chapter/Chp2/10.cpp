#include <iostream>
using namespace std;

int main() {
    int pounds, shillings, pence;
    double decimalPounds;

    cout << "Enter pounds: ";
    cin >> pounds;

    cout << "Enter shillings: ";
    cin >> shillings;

    cout << "Enter pence: ";
    cin >> pence;

    decimalPounds = pounds + (shillings + pence / 12.0) / 20.0;

    cout << "Decimal pounds = £" << decimalPounds << endl;

    return 0;
}
