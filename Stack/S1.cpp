//Stack implementation using array
// push pop 

#include <iostream>
using namespace std;

class stack{
    int *arr;
    int SIZE;
    int top;

public:
    stack(s){
        top = -1;
        SIZE = s;
        arr = new int[s];
    }
    void push(int value){
        if(top==SIZE-1){
            cout<<"Over flow"<<endl;
            return;
        }
        else{
            top++;
            arr[top]=value;
            cout<<"pushed"<<value<<"into the stack \n";

        }
    };
    void pop(){
        if(top==-1){
            cout<<"Underflow "<<endl;
            return;
        }
        else{
            top--;
            cout<<"Popped"<<arr[top+1]<<"from the stack\n";
        }
    }
}