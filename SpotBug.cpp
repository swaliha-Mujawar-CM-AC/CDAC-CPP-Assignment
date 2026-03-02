#include <iostream>
using namespace std;

// changed to call by reference using &
void doubleIt(int &n) { 
    n = n * 2; // this will now change the actual variable
    cout << "Inside doubleIt: " << n << endl; 
} 

int main() { 
    int num = 7; 
    
    // calling the function
    doubleIt(num); 
    
    cout << "In main after call: " << num << endl; 
    
    return 0; 
}
