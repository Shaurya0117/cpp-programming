# WAP to check given number is composite or not?

#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the number n: ";
    cin>>x;
    for(int i=2;i<x;i++){
        if(x%1==0 && x%i==0){

        }
        cout<<"It is composite";

    }
    return 0;

}