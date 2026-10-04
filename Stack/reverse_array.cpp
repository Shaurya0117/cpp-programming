#include <iostream>
#include <stack>
using namespace std;

int main() {

    int n;
    cin >> n;

    char arr[100];

    // Input array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<char> S;

    // Push array elements into stack
    for (int i = 0; i < n; i++) {
        S.push(arr[i]);
    }

    // Put stack elements back into array
    for (int i = 0; i < n; i++) {
        arr[i] = S.top();
        S.pop();
    }

    // Print reversed array
    cout << "Reversed Array is: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}



// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     string str;
//     cin >> str;

//     stack<char> s;

//     for (int i = 0; i < str.length(); i++) {
//         s.push(str[i]);
//     }

//     while (!s.empty()) {
//         cout << s.top();
//         s.pop();
//     }

//     return 0;
// }