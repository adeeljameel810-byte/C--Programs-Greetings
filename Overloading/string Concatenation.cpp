#include <iostream>
#include <string>
using namespace std;

// Class representing a custom string
class MyString {
private:
    string str;   // Stores the actual string

public:
    // Default constructor
    MyString() : str("") {}

    // Parameterized constructor
    MyString(string s) : str(s) {}

    // Function to take input from user
    void input() {
        cout << "Enter string: ";
        getline(cin, str);
    }

    // Overloading the + operator to concatenate two MyString objects
    MyString operator + (const MyString& s) {
        return MyString(str + s.str);
    }

    // Function to display the string
    void display() {
        cout << str;
    }
};

int main() {
    MyString s1, s2, result;

    cout << "Enter first string:\n";
    s1.input();

    cout << "\nEnter second string:\n";
    s2.input();

    // Concatenate using overloaded +
    result = s1 + s2;

    cout << "\nConcatenated string: ";
    result.display();

    return 0;
}
