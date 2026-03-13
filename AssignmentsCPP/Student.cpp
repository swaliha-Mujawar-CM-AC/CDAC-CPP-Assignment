#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;
    char grade;

public:
    // constructor to avoid garbage values
    Student() {
        name = "None";
        rollNumber = 0;
        marks = 0.0f;
        grade = '-';
    }

    // getters and setters
    void setName(string n) { name = n; }
    string getName() { return name; }

    void setRoll(int r) { rollNumber = r; }
    int getRoll() { return rollNumber; }

    void setMarks(float m) { marks = m; }
    float getMarks() { return marks; }

    char getGrade() { return grade; }

    // grading logic
    void calculateGrade() {
        if (marks >= 90) grade = 'A';
        else if (marks >= 80) grade = 'B';
        else if (marks >= 70) grade = 'C';
        else if (marks >= 60) grade = 'D';
        else grade = 'F';
        cout << "Grade updated based on marks!" << endl;
    }
};

int main() {
    Student s1;
    int choice = 0;

    while (choice != 4) {
        cout << "\n--- Student Menu ---" << endl;
        cout << "1. Accept Info\n2. Display Info\n3. Calculate Grade\n4. Exit" << endl;
        cout << "Enter Choice: ";
        
        // Fix for non-numeric input infinite loop
        if (!(cin >> choice)) {
            cout << "Invalid input! Use numbers only." << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        cin.ignore(); // Clean buffer after reading choice

        if (choice == 1) {
            string tempName;
            int tempRoll;
            float tempMarks;

            cout << "Enter Name: ";
            getline(cin, tempName); // Allows spaces in name
            s1.setName(tempName);

            cout << "Enter Roll Number: ";
            cin >> tempRoll;
            s1.setRoll(tempRoll);

            cout << "Enter Marks: ";
            cin >> tempMarks;
            s1.setMarks(tempMarks);
            
            cout << "Information Stored!" << endl;
        } 
        else if (choice == 2) {
            cout << "\n--- Student Details ---" << endl;
            cout << "Name: " << s1.getName() << endl;
            cout << "Roll: " << s1.getRoll() << endl;
            cout << "Marks: " << s1.getMarks() << endl;
            cout << "Grade: " << s1.getGrade() << endl;
        } 
        else if (choice == 3) {
            s1.calculateGrade();
        } 
        else if (choice == 4) {
            cout << "Exiting..." << endl;
        }
    }
    return 0;
}
