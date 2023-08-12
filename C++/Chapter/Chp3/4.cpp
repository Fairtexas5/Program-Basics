#include <iostream>
using namespace std;

int main() {
    char doAnother;
    do {
        double num1, num2, result;
        char operation;

        cout << "Enter first number, operator, second number: ";
        cin >> num1 >> operation >> num2;

        switch (operation) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    cout << "Division by zero is not allowed." << endl;
                    continue;
                }
                break;
            default:
                cout << "Invalid operator." << endl;
                continue;
        }

        cout << "Answer = " << result << endl;

        cout << "Do another (y/n)? ";
        cin >> doAnother;

    } while (doAnother == 'y' || doAnother == 'Y');

    return 0;
}
