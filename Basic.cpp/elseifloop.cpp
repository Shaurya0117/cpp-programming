#include <iostream>
using namespace std;
int main( ){
    int a,b;
    cout<< "Enter 2 nums :";
    cin>> a >> b;
    if(a<b){
        cout<<"A is true :";
    }
    else if(a>b){
        cout<<"A is equal to B";
    }
    else{
        cout<<"B is true :";
    }
    return 0;
}
