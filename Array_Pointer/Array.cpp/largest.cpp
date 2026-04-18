#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 45, 23, 89, 67};
    int n = sizeof(arr) / 4;

    int largest = arr[0];   

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];   
        }
    }

    cout << "Largest element is: " << largest;

    return 0;
}