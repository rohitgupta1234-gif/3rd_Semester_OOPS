#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;   // Data hiding

public:
    // Constructor
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount.\n";
        }
        else if (amount > balance) {
            cout << "Insufficient balance.\n";
        }
        else {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
    }

    // Display balance
    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(5000);

    account.displayBalance();

    account.deposit(2000);
    account.displayBalance();

    account.withdraw(1500);
    account.displayBalance();

    account.withdraw(7000);

    return 0;
}