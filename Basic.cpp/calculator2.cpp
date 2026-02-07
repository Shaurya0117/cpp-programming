#include <iostream>
using namespace std;

int main(){
    int n1;
    cin>>n1;
    int op;
    cin>> op;
    int n2;
    cin>> n2;
    if(op=='+') cout<<n1 + n2 <<endl;
    if(op=='-') cout<<n1 - n2 <<endl;
    if(op=='*') cout<<n1 * n2 <<endl;
    if(op=='/') cout<<n1 / n2 <<endl;
}