#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    double marks;

public:
    // Function to set student details
    void setDetails(int roll, const string &n, double m);

    // Function to display student details
    void display() const;

    // Function to calculate and return grade
    char grade() const;
};

// Definition of setDetails()
void Student::setDetails(int roll, const string &n, double m) {
    rollNumber = roll;
    name = n;
    marks = m;
}

// Definition of display()
void Student::display() const {
    cout << "Roll Number: " << rollNumber << '\n';
    cout << "Name: " << name << '\n';
    cout << "Marks: " << marks << '\n';
    cout << "Grade: " << grade() << '\n';
}

// Definition of grade()
char Student::grade() const {
    if (marks >= 90)
        return 'A';
    else if (marks >= 75)
        return 'B';
    else if (marks >= 60)
        return 'C';
    else if (marks >= 40)
        return 'D';
    else
        return 'F';
}

int main() {
    // Creating Student object
    Student s1;

    // Setting student details
    s1.setDetails(101, "Aman", 85.5);

    // Displaying student details
    s1.display();

    return 0;
}