#include <iostream>

using namespace std;

class Matrix {
    int row, col;
    int** data; // Pointer to pointer for 2D array

public:
    Matrix(int r, int c) {
        row = r;
        col = c;
        // Allocate memory
        data = new int*[row];
        for (int i = 0; i < row; i++) {
            data[i] = new int[col];
        }
    }

    // Destructor to free memory
    ~Matrix() {
        for (int i = 0; i < row; i++) {
            delete[] data[i];
        }
        delete[] data;
    }

    // operator >> for input
    friend istream& operator>>(istream& in, Matrix& m) {
        cout << "Enter " << m.row * m.col << " elements: ";
        for (int i = 0; i < m.row; i++) {
            for (int j = 0; j < m.col; j++) {
                in >> m.data[i][j];
            }
        }
        return in;
    }

    // operator << for display
    friend ostream& operator<<(ostream& out, const Matrix& m) {
        for (int i = 0; i < m.row; i++) {
            for (int j = 0; j < m.col; j++) {
                out << m.data[i][j] << " ";
            }
            out << endl;
        }
        return out;
    }

    // operator + for addition
    Matrix operator+(const Matrix& other) {
        Matrix temp(row, col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                temp.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return temp;
    }

    // operator == for equality check
    bool operator==(const Matrix& other) {
        if (row != other.row || col != other.col) return false;
        
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (data[i][j] != other.data[i][j]) return false;
            }
        }
        return true;
    }
};

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    Matrix m1(r, c), m2(r, c);

    // Task 1: Input
    cout << "For M1:" << endl;
    cin >> m1;
    cout << "For M2:" << endl;
    cin >> m2;

    // Task 2: Addition
    Matrix m3 = m1 + m2;
    cout << "\nResult of M1 + M2:\n" << m3;

    // Task 3: Comparison
    if (m1 == m2) {
        cout << "\nMatrices are equal." << endl;
    } else {
        cout << "\nMatrices are NOT equal." << endl;
    }

    return 0;
}
