#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>s = {1,2,3,4,5,6,9};
    if(s.find(9) != s.end()){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}