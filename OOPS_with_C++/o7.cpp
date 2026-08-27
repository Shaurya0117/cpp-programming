#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;   

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;

    void showMarks() {
        cout << "\nMarks: " << marks << endl;
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;

    }
};

