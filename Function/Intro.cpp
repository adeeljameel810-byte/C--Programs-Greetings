#include<iostream>
using namespace std;

void introduce(string name, string hobby, string campus, string district) {
    cout << "Hello Everyone!" << endl;
    cout << "My name is " << name << "." << endl;
    cout << "I am learning C++ programming." << endl;
    cout << "I love to use " << hobby << " and share my code!" << endl;
    cout << "I am a student of " << campus << "!" << endl;
    cout << "My District is " << district << "!" << endl;
}

int main() {
    introduce("Jameel Ahmed", "GitHub", "MUET SZAB Campus Khairpur", "Khairpur");
    return 0;
}

