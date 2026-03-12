#include <iostream>

using namespace std;

class Vector {
    int* arr;
    int size;

public:
    Vector(int s) {
        size = s;
        arr = new int[size];
        // simple loop to fill with 0
        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }
    }

    // destructor to free memory
    ~Vector() {
        delete[] arr;
    }

    // operator [] to get or set elements by index
    int& operator[](int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        }
        cout << "Out of bounds!" << endl;
        return arr[0]; 
    }

    // operator () to calculate total sum
    int operator()() {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum = sum + arr[i];
        }
        return sum;
    }
};

int main() {
    int n;
    cout << "Enter size of vector: ";
    cin >> n;

    Vector v(n);

    // Task 3: setting value at index 2
    if (n > 2) {
        v[2] = 50; 
        v[0] = 10;
        v[1] = 20;
        cout << "Value at v[2] is: " << v[2] << endl;
    }

    // Task 4: printing sum using ()
    cout << "Sum of all elements: " << v() << endl;

    return 0;
}
