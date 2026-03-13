#include <iostream>
using namespace std;

int main() {
    // 1. Store an integer in a variable
    int num = 10;
    cout << "Original value: " << num << endl;

    // 2. Create a pointer pointing to the variable
    int *ptr = &num;

    // 3. Create a reference to the same variable
    int &ref = num;

    // 4. Modify the value using the pointer
    *ptr = 20; 
    cout << "After modifying with pointer (*ptr = 20): " << num << endl;

    // 5. Modify the value using the reference
    ref = 30;
    cout << "After modifying with reference (ref = 30): " << num << endl;

    return 0;
}
