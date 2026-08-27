//wap to pass object object as argument and return object 
//from function to perform operation on user defined data


#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Function that accepts objects as arguments
    // and returns an object
    Complex add(Complex c)
    {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(5, 3);
    Complex c2(2, 4);

    // Passing c2 as an object argument
    // and storing returned object in c3
    Complex c3 = c1.add(c2);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Addition: ";
    c3.display();

    return 0;
}