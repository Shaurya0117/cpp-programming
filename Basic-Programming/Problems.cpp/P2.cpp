//WAP to find the highest factor of number n (other than n itself)

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int fac = 1;                    //store highest factor

    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            fac = i;
    }

    cout << "Highest factor = " << fac;

    return 0;
}