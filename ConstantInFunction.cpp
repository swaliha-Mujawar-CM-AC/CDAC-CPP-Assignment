#include <iostream>
#include <iomanip> 

using namespace std;

// global constant for PI
const float PI = 3.14159;

// function prototypes
float circleArea(float r);
float circlePerimeter(float r);

int main() {
    float radius = 7.0;

    // setting precision to 4 as per question
    cout << fixed << setprecision(4);
    
    cout << "Radius: " << radius << endl;
    
    // calling functions and printing
    float area = circleArea(radius);
    float peri = circlePerimeter(radius);
    
    cout << "Area of Circle: " << area << endl;
    cout << "Circumference: " << peri << endl;

    return 0;
}

// area formula = PI * r * r
float circleArea(float r) {
    return PI * r * r;
}

// perimeter formula = 2 * PI * r
float circlePerimeter(float r) {
    return 2 * PI * r;
}
