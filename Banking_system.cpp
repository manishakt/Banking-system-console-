#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount() {
        accountNumber = 0;
        accountHolder = "";
        balance = 0.0;
    }

    // Create Account
    void createAccount() {
        cout << "\nEnter Account Number: ";
        cin >> accountNumber;
        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolder);

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "\nAccount Created Successfully!\n";
    }

    // Deposit Money
    void deposit() {
        double amount;
        cout << "\nEnter Amount to Deposit: ";
        cin >> amount;

        if (amount > 0) {
            balance += amount;
            cout << "Amount Deposited Successfully.\n";
        } else {
            cout << "Invalid Amount!\n";
        }
    }

    // Withdraw Money
    void withdraw() {
        double amount;
        cout << "\nEnter Amount to Withdraw: ";
        cin >> amount;

        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "Withdrawal Successful.\n";
        } else {
            cout << "Insufficient Balance or Invalid Amount!\n";
        }
    }

    // Check Balance
    void checkBalance() {
        cout << "\nCurrent Balance: Rs. " << balance << endl;
    }

    // Display Account Details
    void displayDetails() {
        cout << "\n----- Account Details -----\n";
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Balance         : Rs. " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    do {
        cout << "\n==============================";
        cout << "\n   BANKING SYSTEM CONSOLE";
        cout << "\n==============================";
        cout << "\n1. Create Account";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Check Balance";
        cout << "\n5. Display Account Details";
        cout << "\n6. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.createAccount();
                break;

            case 2:
                account.deposit();
                break;

            case 3:
                account.withdraw();
                break;

            case 4:
                account.checkBalance();
                break;

            case 5:
                account.displayDetails();
                break;

            case 6:
                cout << "\nThank You for Using Banking System Console!\n";
                break;

            default:
                cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 6);

    return 0;
}
