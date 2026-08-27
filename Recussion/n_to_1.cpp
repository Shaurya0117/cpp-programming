#include<iostream>
using namespace std;

void fun(int n){
    if(n==1){
        return 1;

    }
    cout<<n;
    fun(n-1);
    
}