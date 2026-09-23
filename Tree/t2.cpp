//preoder trans

#include <iostream>
using namespace std;

void preorder(int T[], int i, int n)
{
    if (i >= n)
        return;

    cout << T[i] << " ";              
    preorder(T, 2 * i + 1, n);        
    preorder(T, 2 * i + 2, n);     
}

int main()
{
    int T[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Preorder: ";
    preorder(T, 0, n);

    return 0;
}