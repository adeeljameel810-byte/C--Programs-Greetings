#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main() {
    string str;
    cout << "Enter text: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }

    cout << "Uppercase: " << str;
    return 0;
}
