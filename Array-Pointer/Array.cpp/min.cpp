#include <iostream>
using namespace std;
int main(){
    // 5 integer -> 1,2,3,4,5
    int x[5] = {1,2,3,4,5};
    int min =x[0];
    for(int i =0;i<5;i++){
        if(x[i]<min)
        x[i]=min;

    }
    cout<<min;
}