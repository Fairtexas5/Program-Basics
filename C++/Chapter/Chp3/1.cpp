#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    const int columns = 10;
    const int lines = 20;

    for (int line = 1; line <= lines; ++line) {
        for (int column = 1; column <= columns; ++column) {
            int multiple = number * (line - 1) * columns + number * column;
            cout << setw(5) << multiple;

            if (column == columns) {
                cout << endl;
            }
        }
    }

    return 0;
}
