#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double initialAmount, interestRate, desiredAmount;
    int years = 0;

    cout << "Enter initial amount: ";
    cin >> initialAmount;

    cout << "Enter interest rate (percent per year): ";
    cin >> interestRate;

    cout << "Enter desired amount: ";
    cin >> desiredAmount;

    interestRate /= 100.0; // Convert percentage to decimal

    double currentAmount = initialAmount;

    while (currentAmount < desiredAmount) {
        currentAmount += currentAmount * interestRate;
        years++;
    }

    cout << "It will take " << years << " years to reach the desired amount." << endl;

    return 0;
}
