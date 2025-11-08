#include <iostream>
#include <string>
using namespace std;

string birthYear(string name, int age) {
    int currentYear = 2025; // current year
    int birthYear = currentYear - age;
    return name + ", you were born in " + to_string(birthYear);
}

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << birthYear(name, age) << endl;

    return 0;
}

