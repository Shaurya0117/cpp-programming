#include<iostream>
#include<set>
using namespace std;

int main(){
     set<int>s1={1,2,3,4,5,6,7};
     set<int>s2={6,7,8,9,10,11};
     for(int x: s1){
        if(s2.find(x) != s2.end()){
            cout<<x<<" ";
        

     }

     
     }
     return 0;
    }
