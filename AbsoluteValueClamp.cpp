#include <iostream>
using namespace std;

// 1. Function using ternary to get absolute value
int absolute(int n) {
    // If n is less than 0, return -n, else return n
    return (n < 0) ? -n : n;
}

// 2. Function using nested ternary to clamp value
int clamp(int val, int lo, int hi) {
    // Check if val is less than low, else check if it's higher than hi
    return (val < lo) ? lo : (val > hi) ? hi : val;
}

int main() {
    // Table Header using tabs for alignment
    cout << "val\tlo\thi\tabsolute(val)\tclamp(val, lo, hi)" << endl;
    cout << "------------------------------------------------------------" << endl;

    // Test cases as per the assignment table
    int v1 = -15, l1 = -10, h1 = 10;
    int v2 = 0,   l2 = -10, h2 = 10;
    int v3 = 25,  l3 = -10, h3 = 10;
    int v4 = -3,  l4 = 0,   h4 = 5;

    // Printing Row 1
    cout << v1 << "\t" << l1 << "\t" << h1 << "\t" << absolute(v1) << "\t\t" << clamp(v1, l1, h1) << endl;
    
    // Printing Row 2
    cout << v2 << "\t" << l2 << "\t" << h2 << "\t" << absolute(v2) << "\t\t" << clamp(v2, l2, h2) << endl;
    
    // Printing Row 3
    cout << v3 << "\t" << l3 << "\t" << h3 << "\t" << absolute(v3) << "\t\t" << clamp(v3, l3, h3) << endl;
    
    // Printing Row 4
    cout << v4 << "\t" << l4 << "\t" << h4 << "\t" << absolute(v4) << "\t\t" << clamp(v4, l4, h4) << endl;

    return 0;
}
