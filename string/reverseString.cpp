#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare a string to store user input
    string str;

    // Ask the user to enter a string
    cout << "Enter a string: ";
    getline(cin, str);  // Allows input with spaces

    // Variable to store the reversed string
    string reversed = "";

    // Loop backward through the original string
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];  // Append each character to the reversed string
    }

    // Display the reversed string
    cout << "Reversed string: " << reversed;

    return 0; // End of program
}
