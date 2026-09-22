#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    // Default Constructor
    Student() {
        roll = 0;
        name = "Unknown";
        cout << "Default Constructor called" << endl;
    }

    // Parameterized Constructor
    Student(int r, string n) {
        roll = r;
        name = n;
        cout << "Parameterized Constructor called" << endl;
    }

    // Copy Constructor
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        cout << "Copy Constructor called" << endl;
    }

    // Display function
    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    Student s1;                 // Default constructor

    Student s2(101, "Rohit");   // Parameterized constructor

    Student s3 = s2;            // Copy constructor

    s1.display();
    s2.display();
    s3.display();

    return 0;                   // Destructors called automatically
}
// Lab mai sir kraye the
