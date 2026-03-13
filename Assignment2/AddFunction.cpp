#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    const int employeeId;
    string name;
    float salary;

    // Constructor with initializer list
    Employee(int id, string n, float s) : employeeId(id), name(n), salary(s) {
    }

    // Function to display the details
    void displayDetails() {
        cout << "--- Employee Info ---" << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Monthly Salary: " << salary << endl;
        cout << "---------------------" << endl;
    }
};

int main() {
    // Creating an object and calling the display function
    Employee emp1(501, "Suresh", 35000.75);
    
    emp1.displayDetails();

    return 0;
}
