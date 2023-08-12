#include <iostream>
using namespace std;

int main() {
    float decpounds;
    int pounds;
    float decfrac, decfracForShillings;
    int shillings, pence;

    cout << "Enter decimal pounds: ";
    cin >> decpounds;

    pounds = static_cast<int>(decpounds); // Remove decimal fraction
    decfrac = decpounds - pounds; // Regain decimal fraction

    decfracForShillings = decfrac * 20;
    shillings = static_cast<int>(decfracForShillings); // Remove decimal fraction for shillings

    pence = static_cast<int>((decfracForShillings - shillings) * 12); // Calculate pence

    cout << "Equivalent in old notation = £" << pounds << "." << shillings << "." << pence << "." << endl;

    return 0;
}
