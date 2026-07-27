#include <iostream>
#include <string>
using namespace std;

class b
 {
    public:
    int roll;
    int mark;
    string name;

    void display(){
        cout<<"Name : "<< name <<endl;
        cout<<"Roll : "<< roll <<endl;
        cout<<"Mark : "<< mark <<endl;
        
    }
};

int main(){
    b b1;
    b1.name = "Shaurya";
    b1.roll = 45;
    b1.mark = 67;

    b1.display();

    return 0;

}