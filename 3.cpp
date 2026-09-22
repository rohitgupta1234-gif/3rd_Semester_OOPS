#include <iostream>
using namespace std;

double balance = 10000.0;

void withdraw(double amount) {
    balance -= amount;
}

void resetForTesting() {
    balance = 0.0;
}

int main() {
    withdraw(500.0);
    resetForTesting();
    cout << balance;
}

// main()
//   ↓
// withdraw(500.0)
//   ↓
// balance = 10000 - 500
//   ↓
// balance = 9500
//   ↓
// resetForTesting()
//   ↓
// balance = 0
//   ↓
// cout << balance
//   ↓
// Output: 0