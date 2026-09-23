#include <iostream>
using namespace std;

void inorder(int T[], int i, int n)
{
    if (i >= n)
        return;

    inorder(T, 2 * i + 1, n);
    cout << T[i] << " ";
    inorder(T, 2 * i + 2, n);
}

int main()
{
    int T[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Inorder: ";
    inorder(T, 0, n);

    return 0;
}