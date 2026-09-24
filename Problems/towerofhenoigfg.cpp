#include <iostream>
using namespace std;

void toh(int n, char S, char H, char D)
{
    if (n == 1)
    {
        cout << "Disk " << n << " move from " << S << " to " << D << endl;
        return;
    }

    toh(n - 1, S, D, H);

    
    cout << "Disk " << n << " move from " << S << " to " << D << endl;

    
    toh(n - 1, H, S, D);
}

int main()
{
    int n = 3;

    toh(n, 'S', 'H', 'D');

    return 0;
}