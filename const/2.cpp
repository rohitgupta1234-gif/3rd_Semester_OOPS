#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance = 0.0;  // Private data member

public:
    // Function to deposit money
    bool deposit(double amount) {
        // Deposit amount must be positive
        if (amount <= 0.0)
            return false;

        balance += amount;
        return true;
    }

    // Function to withdraw money
    bool withdraw(double amount) {
        // Amount must be positive and cannot exceed balance
        if (amount <= 0.0 || amount > balance)
            return false;

        balance -= amount;
        return true;
    }

    // Const member function to check balance
    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account;

    // Deposit money
    account.deposit(1000);

    // Withdraw money
    account.withdraw(300);

    // Display balance
    cout << "Balance: " << account.getBalance() << endl;

    return 0;
}