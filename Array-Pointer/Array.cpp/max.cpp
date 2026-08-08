#include <iostream>
using namespace std;
int main(){
    // 5 integer -> 1,2,3,4,5
    int x[5] = {1,2,3,4,5};
    int mx = x[0];
    for(int i=1;i<5;i++){
        if(mx<x[i])
        mx = x[i];
    }
    cout<<mx;
}
