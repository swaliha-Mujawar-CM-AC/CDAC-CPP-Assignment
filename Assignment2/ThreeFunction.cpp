#include <iostream>
using namespace std;

// This one won't work because it only swaps copies
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// This one works by using pointers to the actual memory
void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// This one works by using nicknames (references) for the variables
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    // Testing Swap by Value
    cout << "Before swapByValue: x = " << x << ", y = " << y << endl;
    swapByValue(x, y);
    cout << "After swapByValue:  x = " << x << ", y = " << y << " (No change)" << endl << endl;

    // Testing Swap by Address
    x = 10, y = 20; // reset values
    cout << "Before swapByAddress: x = " << x << ", y = " << y << endl;
    swapByAddress(&x, &y);
    cout << "After swapByAddress:  x = " << x << ", y = " << y << " (Swapped!)" << endl << endl;

    // Testing Swap by Reference
    x = 10, y = 20; // reset values
    cout << "Before swapByReference: x = " << x << ", y = " << y << endl;
    swapByReference(x, y);
    cout << "After swapByReference:  x = " << x << ", y = " << y << " (Swapped!)" << endl;

    return 0;
}
