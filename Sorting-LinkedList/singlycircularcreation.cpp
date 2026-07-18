#include <iostream>
using namespace std;

class node{
    public;
    int data;
    Node* next;

    // inbuilt contructor

    Node(int value){
        data +value;
        next = NULL;
    }
};

int main() {
    // Creating nodes with predefined value 
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    // Linking nodes from head to tail
    head->prev = NULL;
    head->next = second;
    second->prev = NULL;
    second->next = third;
    third->prev = NULL;
    third->next = fourth;
    fourth->prev =  NULL;
    fourth->next = first;

    // Printing list
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";

    return 0;
}
