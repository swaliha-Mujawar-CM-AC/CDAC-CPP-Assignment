#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;
    int height;

public:
    // Parameterized constructor
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    // Using this pointer to set values
    void setDimensions(int length, int width, int height) {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    // Logic for volume
    int volume() {
        int v;
        v = length * width * height;
        return v;
    }
};

int main() {
    // Creating object using constructor
    Box b1(10, 5, 2);
    cout << "Volume using constructor: " << b1.volume() << endl;

    // Creating another object and changing values
    Box b2(1, 1, 1);
    b2.setDimensions(4, 3, 2);
    cout << "Volume after setDimensions: " << b2.volume() << endl;

    return 0;
}
