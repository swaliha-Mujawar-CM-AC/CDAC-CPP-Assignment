#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empID;
    string empName;
    double empSalary;

public:
    // constructor to set default values
    Employee() {
        empID = 0;
        empName = "None";
        empSalary = 0.0;
    }

    // getters and setters
    void setEmpID(int id) { empID = id; }
    int getEmpID() { return empID; }

    void setEmpName(string name) { empName = name; }
    string getEmpName() { return empName; }

    void setEmpSalary(double salary) { empSalary = salary; }
    double getEmpSalary() { return empSalary; }

    // function to find gross salary with bonus
    double calculateGrossSalary() {
        double bonus = 0;
        
        if (empSalary <= 5000) {
            bonus = empSalary * 0.10; // 10% bonus
        } 
        else if (empSalary > 5000 && empSalary <= 10000) {
            bonus = empSalary * 0.15; // 15% bonus
        } 
        else {
            bonus = empSalary * 0.20; // 20% bonus
        }
        
        return empSalary + bonus;
    }

    // function to show all data
    void displayEmployeeDetails() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "ID          : " << empID << endl;
        cout << "Name        : " << empName << endl;
        cout << "Basic Salary: " << empSalary << endl;
        cout << "Gross Salary: " << calculateGrossSalary() << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    Employee emp; // creating one employee object
    int choice = 0;

    while (choice != 5) {
        cout << "\n--- Payroll Management System ---" << endl;
        cout << "1. Add/Update Employee" << endl;
        cout << "2. Calculate Gross Salary" << endl;
        cout << "3. Display Details" << endl;
        cout << "4. Update Salary" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter Choice: ";
        
        // fix for infinite loop
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter numbers only!" << endl;
            continue;
        }

        if (choice == 1 || choice == 4) {
            int id;
            string name;
            double sal;

            cout << "Enter Employee ID: ";
            cin >> id;
            emp.setEmpID(id);

            cout << "Enter Employee Name (one word): ";
            cin >> name;
            emp.setEmpName(name);

            cout << "Enter Employee Salary: ";
            cin >> sal;
            emp.setEmpSalary(sal);
            
            cout << "Data Updated Successfully!" << endl;
        } 
        else if (choice == 2) {
            cout << "Gross Salary for " << emp.getEmpName() << " is: " << emp.calculateGrossSalary() << endl;
        } 
        else if (choice == 3) {
            if(emp.getEmpID() == 0) {
                cout << "No employee data found! Please add first." << endl;
            } else {
                emp.displayEmployeeDetails();
            }
        } 
        else if (choice == 5) {
            cout << "Exiting system..." << endl;
        } 
        else {
            cout << "Invalid Option!" << endl;
        }
    }

    return 0;
}
