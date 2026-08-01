#include <iostream>
using namespace std;
int main(){
    // 5 integer -> 1,2,3,4,5
    int x[5] = {1,2,3,4,5};
    int y;
    cout<<"Enter the number: ";
    cin>>y;
    int n = sizeof(x)/sizeof(x[0]);
    bool flag = false;
    for(int i =0;i<n;i++){
        if(x[i]==y){
            flag =true;
            //cout<<x<<" is present in array";
            break;
        }

    }
    if(flag == true){
        cout<< y<< " is present";
    }
    else{
        cout<<y<<" is not present ";
    }

}