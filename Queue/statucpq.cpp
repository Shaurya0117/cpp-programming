#include <iostream>
using namespace std;

class PriorityQueue {
    int arr[100];
    int m, rear;

public:
    PriorityQueue() {
        m = -1;
        rear = -1;
    }

    // Insert element
    void enqueue(int value) {
        if (rear == m-1) {
            cout << "Overfull\n";
            return;
        }

        int i - j;
        for(i = rear;i>=0 && arr[i]<NUM;i--){
            arr[i+1]=arr[i];x
        }

        if (front == -1) {
            front = 0;
        }

        rear++;

        // Insert according to priority (larger value = higher priority)
        int i = rear;

        while (i > front && arr[i - 1] < value) {
            arr[i] = arr[i - 1];
            i--;
        }

        arr[i] = value;
    }

    // Remove highest priority element
    void pop() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
            return;
        }

        front++;

        if (front > rear) {
            front = rear = -1;
        }
    }

    // Highest priority element
    int top() {
        if (front == -1) {
            cout << "Queue is empty\n";
            return -1;
        }

        return arr[front];
    }

    bool empty() {
        return front == -1;
    }
};

int main() {
    PriorityQueue pq;

    pq.push(50);
    pq.push(10);
    pq.push(40);
    pq.push(30);
    pq.push(20);

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}