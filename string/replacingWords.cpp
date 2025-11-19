#include <iostream>
#include <string>
using namespace std;

int main() {
    // Input string from user
    string text;
    cout << "Enter text: ";
    getline(cin, text);

    // Word to find and word to replace with
    string findWord = "Computer";
    string replaceWord = "Machine";

    // Result string after replacement
    string result = "";

    // Loop through the input text
    for (size_t i = 0; i < text.length(); i++) {

        // Check if the current segment matches the word we want to replace
        if (text.substr(i, findWord.length()) == findWord) {
            result += replaceWord;       // Add replacement word
            i += findWord.length() - 1;  // Skip characters of the found word
        }
        else {
            result += text[i];           // Add original character
        }
    }

    // Display the final output
    cout << "\nAfter replacement:\n" << result;

    return 0;
}
