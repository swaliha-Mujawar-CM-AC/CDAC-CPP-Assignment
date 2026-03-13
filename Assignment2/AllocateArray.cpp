#include <iostream>
using namespace std;

int main() {
    // 1. Use 'new' to allocate an array of 5 integers
    int *arr = new int[5];

    // 2. Take user input using a simple loop
    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // 3. Print the values back out
    cout << "\nYou entered: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 4. Deallocate memory using delete[]
    // We use [] because it was an array
    delete[] arr;
    
    cout << "\nMemory has been freed!" << endl;

    return 0;
}
