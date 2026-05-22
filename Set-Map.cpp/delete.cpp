#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>s = {1,2,3,4,5,6,9};
    s.erase(6);
    for(int x : s){
        cout<<x<<" ";
    }
    return 0;
}