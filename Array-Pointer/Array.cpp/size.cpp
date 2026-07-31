#include <iostream>
using namespace std;
int main(){
    // 5 integer -> 1,2,3,4,5
    int x[] = {1,2,3,4,5};

    
    cout<< sizeof(x)/4 << endl;
    
    cout<<sizeof(x)/sizeof(x[0]);
    
    return 0;
       
}