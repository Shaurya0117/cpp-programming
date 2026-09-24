#include <iostream>
using namespace std;

void postorder(int T[], int i, int n)
{
    if (i >= n)
        return;

    postorder(T, 2 * i + 1, n);        // Left
    postorder(T, 2 * i + 2, n);        // Right
    cout << T[i] << " ";              // Root
}

int main()
{
    int T[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Postorder: ";
    postorder(T, 0, n);

    return 0;
}