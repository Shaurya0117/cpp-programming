#include <iostream>
#include <string>
using namespace std;

// Base Class
class Base {
protected: // Using protected so derived class can access if needed
    string s_name;
    int s_roll_no;
    string s_address;

public:
    void getStudentData() {
        cout << "Enter Name: ";
        getline(cin, s_name);
        cout << "Enter Roll No: ";
        cin >> s_roll_no;
        cin.ignore(); // Clear buffer for next string input
        cout << "Enter Address: ";
        getline(cin, s_address);
    }

    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name    : " << s_name << endl;
        cout << "Roll No : " << s_roll_no << endl;
        cout << "Address : " << s_address << endl;
    }
};

// Sub Class
class Branch : public Base {
private:
    string branchName;

public:
    void getBranchData() {
        getStudentData(); // Get base class data
        cout << "Enter Branch Name: ";
        getline(cin, branchName);
    }

    void displayBranch() {
        display(); // Display base class details
        cout << "Branch  : " << branchName << endl;
    }
};

int main() {
    Branch obj;

    // Reading data and displaying through Subclass object
    obj.getBranchData();
    obj.displayBranch();

    return 0;
}