#include<iostream>
#include<set>
using namespace std;

int main(){
    // set<int>s1={1,2,3,4,5,6,3,4,2,7,5,6,8,9};
    set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(10);     //set will remove dublicate element automatcially
    s.insert(50);

     for(int x : s){
        cout<<x<<" ";
    }
    return 0;
}