#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variable to store the input text from the user
    string text;

    // Asking the user to enter text
    cout << "Enter text: ";
    getline(cin, text);   // Read full line including spaces

    // Counter to count occurrences of the word "the"
    int count = 0;

    // The word we want to search for
    string word = "the";

    // Loop through the entire text
    // Check every substring of length 3
    for (int i = 0; i < text.length(); i++) {
        // If the substring from position i for 3 characters equals "the"
        if (text.substr(i, 3) == word)
            count++;  // Increase counter
    }

    // Display the total occurrences found
    cout << "Occurrences of 'the': " << count;

    return 0;
}
