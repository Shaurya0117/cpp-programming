// WAP to print sum of digit of a given number.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int sum = 0;

    while(n>0){
        sum += n%10;
        n = n/10;
    }

    cout<<"SUM = "<<sum;

}