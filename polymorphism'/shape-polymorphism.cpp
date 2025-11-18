#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual float area() {
        return 0;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    float area() override {
        return 3.1416 * radius * radius; // πr²
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    float area() override {
        return length * width; // l × w
    }
};

int main() {
    Shape* shape;

    Circle c1(5);        // radius = 5
    Rectangle r1(4, 6);  // length = 4, width = 6

    // Circle Area
    shape = &c1;
    cout << "Area of Circle: " << shape->area() << endl;

    // Rectangle Area
    shape = &r1;
    cout << "Area of Rectangle: " << shape->area() << endl;

    return 0;
}
