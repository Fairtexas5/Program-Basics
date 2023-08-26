#include <iostream>
#include <cstring>
using namespace std;

class BankAccount {
private:
    char depositorName[50];
    long accountNumber;
    char accountType[20];
    double balance;

public:
    BankAccount() {
        accountNumber = 0;
        balance = 0.0;
        strcpy(depositorName, "");
        strcpy(accountType, "");
    }

    void assignInitialValues(const char *name, long accNum, const char *accType, double initialBalance) {
        strcpy(depositorName, name);
        accountNumber = accNum;
        strcpy(accountType, accType);
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    void display() const {
        cout << "Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount accounts[10];

    for (int i = 0; i < 10; ++i) {
        char name[50];
        long accNum;
        char accType[20];
        double initialBalance;

        cout << "Enter details for customer " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin.getline(name, 50);
        cout << "Account Number: ";
        cin >> accNum;
        cin.ignore(); // Clear newline left in the buffer
        cout << "Account Type: ";
        cin.getline(accType, 20);
        cout << "Initial Balance: ";
        cin >> initialBalance;

        accounts[i].assignInitialValues(name, accNum, accType, initialBalance);
        cout << "Customer " << i + 1 << " details recorded." << endl;
    }

    cout << "\nCustomer Account Details:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "\nCustomer " << i + 1 << ":\n";
        accounts[i].display();
    }

    return 0;
}
