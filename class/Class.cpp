#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    void displayInfo() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car car1;
    car1.brand = "BMW";
    car1.speed = 180;

    car1.displayInfo();
     return 0;
}
