#include <iostream>
using namespace std;

int main() {
    // declaring variables
    int x = 10, y = 20, z = 30;

    // creating pointers for each variable
    int *px = &x;
    int *py = &y;
    int *pz = &z;

    // showing data before swap
    cout << "--- Before swapping x and z ---" << endl;
    cout << "Values: x=" << x << ", y=" << y << ", z=" << z << endl;
    
    // printing addresses stored in pointers
    cout << "Address px: " << px << endl;
    cout << "Address py: " << py << endl;
    cout << "Address pz: " << pz << endl;

    // logic to swap x and z using pointers
    // i will use a temp variable for this
    int temp = *px; 
    *px = *pz;      
    *pz = temp;     

    // showing data after swap
    cout << "\n--- After swapping x and z ---" << endl;
    cout << "Values: x=" << x << ", y=" << y << ", z=" << z << endl;
    
    // checking if addresses changed or not
    cout << "Address px: " << px << endl;
    cout << "Address py: " << py << endl;
    cout << "Address pz: " << pz << endl;

    return 0;
}
