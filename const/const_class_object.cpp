#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    Student(int m) {
        marks = m;
    }

    void display() const {
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Creating a const object
    const Student s(90);

    // Calling const member function
    s.display();

    return 0;
}