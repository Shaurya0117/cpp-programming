// Priority Queue

#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> PQ;

    PQ.push(50);
    PQ.push(40);
    PQ.push(30);
    PQ.push(20);
    PQ.push(10);

    while (!PQ.empty()) {
        cout << PQ.top() << " ";
        PQ.pop();
    }

    cout << endl;
    return 0;
}