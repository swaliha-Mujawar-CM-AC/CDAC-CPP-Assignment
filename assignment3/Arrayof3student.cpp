#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
    int roll;
    string name;
    float marks;

public:
    // Param constructor
    Student(int r, string n, float m) {
        roll = r;
        name = n;
        marks = m;
    }

    // Default constructor needed for array declaration
    Student() {
        roll = 0;
        name = "";
        marks = 0.0;
    }

    ~Student() {
        cout << "Destroying student: " << name << endl;
    }

    // Helper to get data for file writing
    void showData() {
        cout << "Roll: " << roll << ", Name: " << name << ", Marks: " << marks << endl;
    }

    // Friend functions for easy file I/O
    friend ostream& operator<<(ostream& out, const Student& s) {
        out << s.roll << " " << s.name << " " << s.marks << endl;
        return out;
    }

    friend istream& operator>>(istream& in, Student& s) {
        in >> s.roll >> s.name >> s.marks;
        return in;
    }
};

int main() {
    // Task 1: Array of 3 objects
    Student s[3] = {
        Student(1, "Amit", 85.5),
        Student(2, "Priya", 90.0),
        Student(3, "Rahul", 78.2)
    };

    // Task 2: Write to file
    ofstream outfile("students.txt");
    for(int i = 0; i < 3; i++) {
        outfile << s[i];
    }
    outfile.close();
    cout << "Data written to file.\n" << endl;

    // Task 3: Read from file and print
    cout << "Reading from file:" << endl;
    ifstream infile("students.txt");
    Student temp;
    while(infile >> temp) {
        temp.showData();
    }
    infile.close();
    cout << endl;

    return 0;
}
