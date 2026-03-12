#include <iostream>
#include <string.h>

using namespace std;

class MyString {
    char* str;

public:
    // Default Constructor
    MyString() {
        str = new char[1];
        str[0] = '\0';
    }

    // Parameterized Constructor
    MyString(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Copy Constructor (Deep Copy)
    MyString(const MyString& obj) {
        str = new char[strlen(obj.str) + 1];
        strcpy(str, obj.str);
    }

    // Destructor
    ~MyString() {
        delete[] str;
    }

    // Assignment Operator (Deep Copy)
    MyString& operator=(const MyString& obj) {
        if (this != &obj) {
            delete[] str; // free old memory
            str = new char[strlen(obj.str) + 1];
            strcpy(str, obj.str);
        }
        return *this;
    }

    // operator+ for concatenation
    MyString operator+(const MyString& other) {
        char* temp = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(temp, str);
        strcat(temp, other.str);
        
        MyString res(temp);
        delete[] temp; 
        return res;
    }

    // operator >>
    friend istream& operator>>(istream& in, MyString& obj) {
        char buffer[100]; // temporary buffer
        in >> buffer;
        delete[] obj.str;
        obj.str = new char[strlen(buffer) + 1];
        strcpy(obj.str, buffer);
        return in;
    }

    // operator <<
    friend ostream& operator<<(ostream& out, const MyString& obj) {
        out << obj.str;
        return out;
    }
};

int main() {
    MyString s1, s2;

    // Task 1: Input
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    // Task 2: Concatenation
    MyString s3 = s1 + s2;

    // Task 3: Print
    cout << "\nS1: " << s1 << endl;
    cout << "S2: " << s2 << endl;
    cout << "S3 (Concatenated): " << s3 << endl;

    // Task 4: Demonstrate Deep Copy
    MyString s4 = s1; 
    cout << "S4 (Copy of S1): " << s4 << endl;

    return 0;
}
