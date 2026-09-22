#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    int marks;

public:
    Student() {
        marks = 85;
    }

    // Teacher is declared as a friend class
    friend class Teacher;
};

class Teacher {
public:
    void displayMarks(Student s) {
        // Friend class can access private members
        cout << "Student Marks: " << s.marks;
    }
};

int main() {
    Student s1;
    Teacher t1;

    t1.displayMarks(s1);

    return 0;
}