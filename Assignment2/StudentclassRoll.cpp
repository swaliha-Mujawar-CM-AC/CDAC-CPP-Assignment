#include <iostream>
#include <string>
using namespace std;

// Defining the Student class
class Student {
public:
    int rollNo;
    string name;
    float marks;

    // Simple function to show student details
    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Creating an object of Student
    Student s1;

    // Assigning values to the members
    s1.rollNo = 101;
    s1.name = "John Doe";
    s1.marks = 85.5;

    // Printing the details
    cout << "Student Details:" << endl;
    s1.display();

    return 0;
}
