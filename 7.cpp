#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int rollNumber{};
    string name;
    double marks{};

public:
    void read();
    void display();
};

// Function definition outside the class
void Student::read() {
    cout << "Enter roll number: ";
    cin >> rollNumber;

    cout << "Enter name: ";
    getline(cin >> ws, name);

    cout << "Enter marks: ";
    cin >> marks;
}

// Function definition outside the class
void Student::display() {
    cout << "\nStudent Record\n";
    cout << "Roll Number: " << rollNumber << '\n';
    cout << "Name: " << name << '\n';
    cout << "Marks: " << marks << '\n';

    // Ternary operator
    cout << "Result: " << (marks >= 40 ? "Pass" : "Fail") << '\n';
}

int main() {
    // Creating object
    Student student;

    // Calling member functions
    student.read();
    student.display();

    return 0;
}