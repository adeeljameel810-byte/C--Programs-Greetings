#include <iostream>
using namespace std;

/*
    ==========================================================
                     CLASS : Student
    Concepts Demonstrated in This Program:
    ✔ Constructor & Destructor
    ✔ private, public, protected access specifiers
    ✔ Setter & Getter functions
    ✔ Static class member (shared by all objects)
    ==========================================================
*/
class Student {
private:
    // private: only accessible inside the class
    string name;
    int age;

protected:
    // protected: accessible in this class and derived classes
    string department;

public:
    // Static member → one copy shared among all Student objects
    static int studentCount;

    // Constructor → called automatically when an object is created
    Student(string n, int a, string dept) {
        name = n;
        age = a;
        department = dept;
        studentCount++;     // increase count of total students
        cout << "Constructor called for: " << name << endl;
    }

    // Setter functions → used to set private data
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    // Getter functions → used to access private data
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    string getDepartment() {
        return department;  // protected accessed inside class
    }

    // Destructor → called automatically when object is destroyed
    ~Student() {
        cout << "Destructor called for: " << name << endl;
    }
};

// Initializing the static member
int Student::studentCount = 0;

int main() {

    // Creating objects (constructors will be called automatically)
    Student s1("Jameel", 20, "Software Engineering");
    Student s2("Mubeen", 19, "Civil Engineering");

    cout << endl;

    // Using getter functions to display details
    cout << "Student 1: " << s1.getName() << ", Age: "
         << s1.getAge() << ", Dept: " << s1.getDepartment() << endl;

    cout << "Student 2: " << s2.getName() << ", Age: "
         << s2.getAge() << ", Dept: " << s2.getDepartment() << endl;

    cout << endl;

    // Accessing static member using class name
    cout << "Total Students Created: " << Student::studentCount << endl;

    return 0;
}
