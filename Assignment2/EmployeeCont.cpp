#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    // Member variables
    const int employeeId;
    string name;
    float salary;

    // Constructor using the initializer list for all members
    // Notice how they are listed after the ':' before the '{ }'
    Employee(int id, string n, float s) : employeeId(id), name(n), salary(s) {
        // Nothing needs to go inside the body because we already initialized everything!
        cout << "Employee object created successfully." << endl;
    }

    void showData() {
        cout << "ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // Creating the employee object and passing values
    Employee emp1(101, "Rahul", 45000.50);

    cout << "--- Employee Details ---" << endl;
    emp1.showData();

    return 0;
}
