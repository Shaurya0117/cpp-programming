#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* Next;

    Node(int val) {
        this->val = val;
        Next = NULL;
    }
};

class Queue {
    Node* front;
    Node* Rear;

public:
    Queue() {
        front = Rear = NULL;
    }

    // Check if queue is empty
    bool empty() {
        return (front == NULL);
    }

    // Insert element
    void Enqueue(int val) {
        Node* ptr = new Node(val);

        if (empty()) {
            front = Rear = ptr;
        }
        else {
            Rear->Next = ptr;
            Rear = ptr;
        }
    }

    // Delete element
    void Dequeue() {

        if (empty()) {
            cout << "Queue Underflow\n";
            return;
        }

        Node* temp = front;
        front = front->Next;

        // If queue becomes empty
        if (front == NULL) {
            Rear = NULL;
        }

        delete temp;
    }

    // Return front element
    int Front() {

        if (empty()) {
            cout << "Queue is Empty\n";
            return -1;
        }

        return front->val;
    }

    // Display queue
    void Display() {

        if (empty()) {
            cout << "Queue is Empty\n";
            return;
        }

        Node* temp = front;

        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->Next;
        }

        cout << endl;
    }
};

int main() {

    Queue q;

    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);

    cout << "Queue: ";
    q.Display();

    cout << "Front = " << q.Front() << endl;

    q.Dequeue();

    cout << "After Dequeue: ";
    q.Display();

    cout << "Front = " << q.Front() << endl;

    return 0;
}