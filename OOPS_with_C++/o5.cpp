#include <iostream>
#include <string>
using namespace std;

// Base Class
class Base {
private:
    string name;
    int rollno;
    string add;

public:
    void studentdetails() {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollno;

        cout << "Enter Address: ";
        cin >> add;
    }

    void display() {
        cout << "\n----- Student Details -----" << endl;
        cout << "Student Name : " << name << endl;
        cout << "Roll Number  : " << rollno << endl;
        cout << "Address      : " << add << endl;
    }
};

// Sub Class
class Result : public Base {
private:
    int marks;

public:
    void getMarks() {
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void showMarks() {
        cout << "Marks : " << marks << endl;
    }
};

// Main Function
int main() {
    Result s;

    s.studentdetails();   // Base class function
    s.getMarks();         // Sub class function

    cout << endl;

    s.display();          // Base class function
    s.showMarks();        // Sub class function

    return 0;
}

//    29th july