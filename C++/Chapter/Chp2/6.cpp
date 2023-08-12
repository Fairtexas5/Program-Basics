#include <iostream>
using namespace std;

int main() {
    double dollars;

    const double pound = 1.487;
    const double franc = 0.172;
    const double deutschemark = 0.584;
    const double yen = 0.00955;

    cout << "Enter an amount in dollars: ";
    cin >> dollars;

    double amountInPounds = dollars / pound;
    double amountInFrancs = dollars / franc;
    double amountInDeutschemarks = dollars / deutschemark;
    double amountInYen = dollars / yen;

    cout << "Equivalent amount in British pounds: " << amountInPounds << endl;
    cout << "Equivalent amount in French francs: " << amountInFrancs << endl;
    cout << "Equivalent amount in German deutschemarks: " << amountInDeutschemarks << endl;
    cout << "Equivalent amount in Japanese yen: " << amountInYen << endl;

    return 0;
}
