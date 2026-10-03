#include <iostream>
using namespace std;

// Insert a key into BST
void insert(int T[], int n, int key)
{
    int i = 0;

    while (i < n)
    {
        // Empty position found
        if (T[i] == -1)
        {
            T[i] = key;
            return;
        }

        // Go to left child
        if (key < T[i])
        {
            i = 2 * i + 1;
        }
        // Go to right child
        else
        {
            i = 2 * i + 2;
        }
    }
}

// Inorder traversal
void inorder(int T[], int i, int n)
{
    if (i >= n || T[i] == -1)
        return;

    inorder(T, 2 * i + 1, n);

    cout << T[i] << " ";

    inorder(T, 2 * i + 2, n);
}

int main()
{
    int T[13];
    int n = 13;

    // Initialize all positions with -1
    for (int i = 0; i < n; i++)
    {
        T[i] = -1;
    }

    // Insert elements
    insert(T, n, 70);
    insert(T, n, 50);
    insert(T, n, 90);
    insert(T, n, 30);
    insert(T, n, 80);
    insert(T, n, 100);

    cout << "Inorder Traversal: ";
    inorder(T, 0, n);

    return 0;
}