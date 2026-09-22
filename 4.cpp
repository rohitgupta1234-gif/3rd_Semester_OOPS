#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;

public:
    // Function to set student data
    void setData(int roll, const string &studentName) {
        rollNumber = roll;
        name = studentName;
    }

    // Function to display student data
    void display() const {
        cout << "Roll Number: " << rollNumber << '\n';
        cout << "Name: " << name << '\n';
    }
};

int main() {
    // Object creation
    Student s1;

    // Setting student data
    s1.setData(101, "Aman");

    // Displaying student data
    s1.display();

    return 0;
}