#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int id{};
    string name;
    double basicSalary{};

public:
    // Function to set employee details
    void setData(int newId, const string& newName, double salary) {
        id = newId;
        name = newName;
        basicSalary = salary;
    }

    // Function to calculate gross salary
    double grossSalary() {
        // HRA = 20% of basic salary
        const double hra = 0.20 * basicSalary;

        // DA = 10% of basic salary
        const double da = 0.10 * basicSalary;

        // Gross Salary = Basic Salary + HRA + DA
        return basicSalary + hra + da;
    }

    // Function to display employee details
    void display() {
        cout << "ID: " << id << '\n';
        cout << "Name: " << name << '\n';
        cout << "Gross Salary: " << grossSalary() << '\n';
    }
};

int main() {
    // Creating an Employee object
    Employee employee;

    // Setting employee details
    employee.setData(501, "Rohan Mehta", 40000.0);

    // Displaying employee details
    employee.display();

    return 0;
}