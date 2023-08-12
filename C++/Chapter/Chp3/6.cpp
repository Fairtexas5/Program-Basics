/*Modify the FACTOR program in this chapter so that it repeatedly asks for a number and calculates its factorial, 
until the user enters 0, at which point it terminates. You can enclose the relevant statements in FACTOR in a while loop or a do loop to achieve this effect.*/
#include <iostream>
using namespace std;

int main() {
    long n;
    long fact = 1;

    do {
        cout << "Enter a number (0 to quit): ";
        cin >> n;

        if (n < 0) {
            cout << "Factorial is not defined for negative numbers." << endl;
        } else if (n > 0) {
            for (int i = 1; i <= n; ++i) {
                fact *= i;
            }
            cout << "Factorial of " << n << " is: " << fact << endl;
        }

    } while (n != 0);

    cout << "Exiting the program." << endl;

    return 0;
}
