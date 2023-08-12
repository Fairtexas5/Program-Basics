#include <iostream>
#include <cctype> // For toupper()

using namespace std;

int main() {
    char choice;

    do {
        int pounds1, shillings1, pence1;
        int pounds2, shillings2, pence2;
        int totalPounds, totalShillings, totalPence;

        cout << "Enter first amount (pounds.shillings.pence): £";
        cin >> pounds1 >> shillings1 >> pence1;

        cout << "Enter second amount (pounds.shillings.pence): £";
        cin >> pounds2 >> shillings2 >> pence2;

        totalPence = pence1 + pence2;
        totalShillings = shillings1 + shillings2 + (totalPence / 12);
        totalPence %= 12;
        totalPounds = pounds1 + pounds2 + (totalShillings / 20);
        totalShillings %= 20;

        cout << "Total is £" << totalPounds << "." << totalShillings << "." << totalPence << endl;

        cout << "Do you wish to continue (y/n)? ";
        cin >> choice;

    } while (tolower(choice) == 'y');

    return 0;
}
