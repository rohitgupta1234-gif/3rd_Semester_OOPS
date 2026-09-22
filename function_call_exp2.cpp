#include <iostream>
using namespace std;

void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nOriginal values: ";
    cout << "a = " << a << ", b = " << b << endl;

    swapValue(a, b);
    cout << "\nAfter Call by Value: ";
    cout << "a = " << a << ", b = " << b << endl;

    swapReference(a, b);
    cout << "After Call by Reference: ";
    cout << "a = " << a << ", b = " << b << endl;

    swapAddress(&a, &b);
    cout << "After Call by Address: ";
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}