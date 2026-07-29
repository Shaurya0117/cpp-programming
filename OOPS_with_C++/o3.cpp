//Implementation using Inline function

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int roll;
    int mark;
    string name;

    inline void display();
};

inline void Student::display()
{
    cout << "Name : " << name << endl;
    cout << "Roll : " << roll << endl;
    cout << "Mark : " << mark << endl;
}

int main()
{
    Student s1;

    s1.name = "Shaurya";
    s1.roll = 45;
    s1.mark = 67;

    s1.display();

    return 0;
}