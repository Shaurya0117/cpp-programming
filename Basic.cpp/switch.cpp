#include <iostream>
using namespace std;

int main(){
    int n1;
    cin>>n1;
    int op;
    cin>> op;
    int n2;
    cin>> n2;
    switch(op){
    case '+'
     cout<<n1 + n2 <<endl;
         case '-'
     cout<<n1 - n2 <<endl;
         case '*'
     cout<<n1 * n2 <<endl;
         case '/'
     cout<<n1 / n2 <<endl;
     default:
     cout<<"invalid";
    }
}