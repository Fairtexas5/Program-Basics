#include <iostream>
#include <cctype> // For islower() function

using namespace std;

int main() {
    char ch;

    cout << "Enter a letter: ";
    cin >> ch;

    if (islower(ch)) {
        cout << "Nonzero (lowercase)" << endl;
    } else {
        cout << "Zero (uppercase)" << endl;
    }

    return 0;
}
