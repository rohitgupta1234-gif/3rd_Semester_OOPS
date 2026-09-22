#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollno;
    float marks;

    void ask();
    void display();
};


void Student::ask() {
    cout << "\nEnter Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Roll No: ";
    cin >> rollno;

    cout << "Enter Marks: ";
    cin >> marks;
}


void Student::display() {
    cout << "\n------ Student Details ------\n";
    cout << "Name    : " << name << endl;
    cout << "Roll No : " << rollno << endl;
    cout << "Marks   : " << marks << endl;
}

int main() {
    Student s1;
    int choice;

    do {
        cout << "\n===== Student Record System =====\n";
        cout << "1. Enter Student Details\n";
        cout << "2. Display Student Details\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                s1.ask();
                break;

            case 2:
                s1.display();
                break;

            case 3:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 3);

    return 0;
}