/*Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to enter a number of gallons,
and then displays the equivalent in cubic feet.*/

#include <iostream>
using namespace std;

int main() {
    double gallons;
    cout << "Enter the number of gallons: ";
    cin >> gallons;

    double cubicFeet = gallons / 7.481;

    cout << gallons << " gallons is equivalent to " << cubicFeet << " cubic feet." << endl;

    return 0;
}
