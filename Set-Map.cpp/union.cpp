#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>s1 = {1,2,3,4,5,6,9};
    set<int>s2 = {7,8,9,10,11,5};
    set<int>uni;
    for(int x:s1){
        uni.insert(x);
    }
    for(int x:s2){
        uni.insert(x);
    }
    for(int x: uni){
        cout<<x<<" ";
    }
    return 0;
}
    