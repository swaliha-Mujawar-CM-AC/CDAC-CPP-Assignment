#include <iostream>
using namespace std;

// declaring the function first
void findMinMax(int a, int b, int c, int &minVal, int &maxVal);

int main() {
    // some sample numbers
    int n1 = 45, n2 = 12, n3 = 89;
    int lo = 0, hi = 0;

    cout << "Input numbers: " << n1 << " " << n2 << " " << n3 << endl;
    cout << "Before calling function - lo: " << lo << " hi: " << hi << endl;

    // calling function with reference variables
    findMinMax(n1, n2, n3, lo, hi);

    cout << "\nAfter function call:" << endl;
    cout << "Smallest: " << lo << endl;
    cout << "Largest: " << hi << endl;

    return 0;
}

// writing the logic here
void findMinMax(int a, int b, int c, int &minVal, int &maxVal) {
    
    // check for smallest
    if (a < b && a < c) {
        minVal = a;
    } 
    else if (b < c) {
        minVal = b;
    } 
    else {
        minVal = c;
    }

    // check for largest
    if (a > b && a > c) {
        maxVal = a;
    } 
    else if (b > c) {
        maxVal = b;
    } 
    else {
        maxVal = c;
    }
}
