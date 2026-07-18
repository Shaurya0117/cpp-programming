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
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;
    fourth->next = NULL;

    // Printing list
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";

    return 0