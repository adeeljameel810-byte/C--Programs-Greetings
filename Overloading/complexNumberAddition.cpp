#include <iostream>
using namespace std;

// Class representing a Complex Number
class Complex {
private:
    float real;      // Real part
    float imag;      // Imaginary part

public:
    // Default Constructor
    Complex() : real(0), imag(0) {}

    // Parameterized Constructor
    Complex(float r, float i) : real(r), imag(i) {}

    // Function to take input from user
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Overloading the + operator
    Complex operator + (const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Function to display complex number
    void display() {
        cout << real << " + " << imag << "i";
    }
};

int main() {
    Complex c1, c2, sum;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "\nEnter second complex number:\n";
    c2.input();

    // Adding two complex numbers using overloaded +
    sum = c1 + c2;

    cout << "\nSum of the complex numbers: ";
    sum.display();

    return 0;
}
