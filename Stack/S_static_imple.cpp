#include <iostream>
#include <stack>
using namespace std;

# define SIZE 5
 int Stack[SIZE];
 int top = -1;

 void push(int Value){
    if(top == SIZE -1){
        cout<<"Stack overflow";
        return;
    }
    top = top+1;
    Stack[top] = Value;
    cout<< Value<<" Inserted Successfully"<< endl;
 }

 int main(){
    push(10);
    push(20);
 }