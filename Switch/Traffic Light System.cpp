#include <iostream>
using namespace std;

int main() {
    int choice;

    // Display options to the user
    cout << "===== TRAFFIC LIGHT SYSTEM =====\n";
    cout << "1. Red Light\n";
    cout << "2. Yellow Light\n";
    cout << "3. Green Light\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    // Checking which light the user selected
    switch (choice) {

        // If the user selects Red
        case 1:
            cout << "\nRed Light ON\n";
            cout << "STOP! Vehicles must wait.\n";
            break;

        // If the user selects Yellow
        case 2:
            cout << "\nYellow Light ON\n";
            cout << "GET READY! Light is about to change.\n";
            break;

        // If the user selects Green
        case 3:
            cout << "\nGreen Light ON\n";
            cout << "GO! Vehicles can move.\n";
            break;

        // If the user enters any other number
        default:
            cout << "\nInvalid choice. Please select 1, 2, or 3.\n";
    }

    return 0;
}
