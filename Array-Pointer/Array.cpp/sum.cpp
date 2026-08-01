#include <iostream>
using namespace std;

int main(){
    // 5 integer -> 1,2,3,4,5
    int x[5] = {1,2,3,4,5};

    int sum =0;

    for(int i=0; i<5;i++){
        cin>> x[i];
        sum +=  x[i];
    }
    
    cout<<sum;

}