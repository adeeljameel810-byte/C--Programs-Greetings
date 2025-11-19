#include <iostream>
using namespace std;

// Class representing a 3D Vector
class Vector3 {
private:
    float x, y, z;   // Components of the vector

public:
    // Default constructor
    Vector3() : x(0), y(0), z(0) {}

    // Parameterized constructor
    Vector3(float a, float b, float c) : x(a), y(b), z(c) {}

    // Function to take input
    void input() {
        cout << "Enter x: ";
        cin >> x;
        cout << "Enter y: ";
        cin >> y;
        cout << "Enter z: ";
        cin >> z;
    }

    // Overloading the subtraction operator (-)
    Vector3 operator - (const Vector3& v) {
        return Vector3(x - v.x, y - v.y, z - v.z);
    }

    // Function to display vector
    void display() {
        cout << "(" << x << ", " << y << ", " << z << ")";
    }
};

int main() {
    Vector3 v1, v2, diff;

    cout << "Enter first vector:\n";
    v1.input();

    cout << "\nEnter second vector:\n";
    v2.input();

    // Subtracting vectors using overloaded -
    diff = v1 - v2;

    cout << "\nDifference of vectors: ";
    diff.display();

    return 0;
}
