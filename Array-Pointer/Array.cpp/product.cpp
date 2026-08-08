#include <iostream>
using namespace std;

int main(){
    int x[7] ;//= {1,2,3,4,5,6,7};
    int pro = 1;
    for(int i =1; i<7;i++){
        cin>>x[i];
        pro *= x[i];
    }
    cout<<"Product of array is: "<<pro;
}