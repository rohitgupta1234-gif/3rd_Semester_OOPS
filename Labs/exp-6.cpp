#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // 1. Default Constructor
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default Constructor called" << endl;
    }

    // 2. Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized Constructor called" << endl;
    }

    // 3. Copy Constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy Constructor called" << endl;
    }

    // Display function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {

    // Object using Default Constructor
    Student s1;
    s1.display();

    cout << endl;

    // Object using Parameterized Constructor
    Student s2("Rohit", 21);
    s2.display();

    cout << endl;

    // Object using Copy Constructor
    Student s3 = s2;
    s3.display();

    return 0;
}