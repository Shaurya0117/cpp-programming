#include <iostream>
using namespace std;

void fun(int n)
{
    if(n == 0)
    {
        return ; 
    }

    cout << n << " ";
    fun(n - 1);
}

int main()
{
    int n;
    cout << "Enter num: ";
    cin >> n;

    cout << "Numbers from n to 1 are: ";
    fun(n);

    return 0;
}