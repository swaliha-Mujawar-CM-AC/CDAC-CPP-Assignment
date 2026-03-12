#include <iostream>
#include <string.h>

using namespace std;

class Employee {
    int id;
    char* name; 
    mutable int accessCount;

public:
    // Simple constructor
    Employee(int i, const char* n) {
        id = i;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        accessCount = 0;
    }

    // User-defined Copy Constructor (Deep Copy)
    Employee(const Employee &obj) {
        id = obj.id;
        accessCount = obj.accessCount;
        
        // alloc new memory so e1 and e2 are separate
        name = new char[strlen(obj.name) + 1];
        strcpy(name, obj.name);
        cout << "Copy constructor called (Deep Copy)" << endl;
    }

    void display() const {
        accessCount++; // allowed because of mutable
        cout << "ID: " << id << " Name: " << name << " Count: " << accessCount << endl;
    }

    void updateName(const char* newN) {
        strcpy(name, newN);
    }

    ~Employee() {
        delete[] name;
    }
};

int main() {
    Employee e1(101, "Rahul");
    
    // Task 1
    e1.display();
    e1.display();
    e1.display();

    // Task 2
    Employee e2 = e1; 
    
    cout << "\nChecking copy type..." << endl;
    e2.updateName("Amit");
    
    cout << "e1 after e2 name change: ";
    e1.display(); 
    
    cout << "e2 after name change: ";
    e2.display();
    
    // Logic: if e1 still says Rahul, it's a Deep Copy. 
    // If e1 also changed to Amit, it was a Shallow Copy.

    return 0;
}
