//WAP to calculate area of rectangle using constructor overloading
/*
#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:

    
    Rectangle()
    {
        length = 1;
        breadth = 1;
    }
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    
        void area()
    {
        cout << "Area = " << length * breadth << endl;
    }
};

int main(){
     Rectangle r1;
    r1.area();

    
    Rectangle r2(10, 5);
    r2.area();

    return 0;

}*/


//Program: Empty Class in C++
#include <iostream>
using namespace std;

class Emp
{
    string name;
    int sol;

public:

    Emp()
    {
        name = "Unknown";
        sol = 0;
    }

    Emp(string n, int s)
    {
        name = n;
        sol = s;
    }

    void show()
    {
        cout << name << endl;
        cout << sol << endl;
    }
};

int main()
{
    Emp obj;
    Emp obj2("Shaurya", 99);

    obj.show();
    obj2.show();

    return 0;
}