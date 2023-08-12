#include <iostream>
using namespace std;

int main() {
    cout << "Enter up to six digits: ";

    long result = 0;
    char digit = '\0';
    int digitsRead = 0;

    while (digitsRead < 6) {
        digit = getchar(); 

        if (digit >= '0' && digit <= '9') {
            result = result * 10 + (digit - '0');
            digitsRead++;
        } else if (digit == '\r') { 
            break;
        } else {
            cout << "\nInvalid input. Please enter digits only." << endl;
            return 1;
        }
    }

    cout << "\nNumber is: " << result << endl;

    return 0;
}
