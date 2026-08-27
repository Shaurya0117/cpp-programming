#include <iostream>
using namespace std;

#define SIZE 5

class Deque {
    int arr[SIZE];
    int front, rear;

public:
    Deque() {
        front = -1;
        rear = -1;

    }

    bool isFull() {
        return (front == 0 && rear == SIZE - 1) ||
               (front == rear + 1);
    }

    bool isempty(){
        return(front==-1)

    }
    void insert_front