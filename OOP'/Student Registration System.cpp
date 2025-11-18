#include <iostream>
using namespace std;

/*
    ============================================
              CLASS : Course
    Stores information about a course
    ============================================
*/
class Course {
private:
    string courseName;
    string courseCode;

public:
    // Constructor
    Course(string name, string code) {
        courseName = name;
        courseCode = code;
    }

    // Getter functions
    string getCourseName() {
        return courseName;
    }

    string getCourseCode() {
        return courseCode;
    }
};


/*
    ============================================
              CLASS : Student
    Stores student details + registered course
    ============================================
*/
class Student {
private:
    string name;
    int rollNo;

    // Student has a Course object (OOP Relationship: Has-A)
    Course course;

public:
    // Parameterized Constructor
    Student(string n, int r, Course c) : course(c) {
        name = n;
        rollNo = r;
    }

    // Display student details
    void displayInfo() {
        cout << "\n----- Student Information -----\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Registered Course: " << course.getCourseName()
             << " (" << course.getCourseCode() << ")" << endl;
    }
};


/*
    ============================================
                    MAIN FUNCTION
    ============================================
*/
int main() {
    // Creating course object
    Course c1("Object Oriented Programming", "CS201");

    // Creating student object + registering course
    Student s1("Jameel", 9, c1);

    // Display information
    s1.displayInfo();

    return 0;
}
