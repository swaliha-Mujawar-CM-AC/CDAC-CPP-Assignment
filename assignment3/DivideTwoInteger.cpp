#include <iostream>

using namespace std;

// Custom exception class
class DivideByZero {
public:
    void msg() {
        cout << "Error: Cannot divide by zero!" << endl;
    }
};

// Exception specification: this function only throws DivideByZero
float div_func(int a, int b) throw(DivideByZero) {
    if (b == 0) {
        throw DivideByZero();
    }
    return (float)a / b;
}

int main() {
    int n, d;
    cout << "Enter numerator and denominator: ";
    cin >> n >> d;

    // Outer try-catch
    try {
        // Inner try-catch
        try {
            float res = div_func(n, d);
            cout << "Result: " << res << endl;
        }
        catch (DivideByZero e) {
            cout << "Inside inner catch" << endl;
            throw; // Rethrowing to outer catch
        }
    }
    catch (DivideByZero e) {
        cout << "Handled in outer catch" << endl;
        e.msg();
    }

    return 0;
}
