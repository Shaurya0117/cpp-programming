#include <iostream>
using namespace std;

 Class node{
    public
    int data;
    node *prev;
    node *next;

// constructor
    node(value){
    int data =10;
    prev = next = NULL;
 }

 int main(){
    node *head, *second, *third;
    head = new node (10);           // creation of 1st node
    second = new node (20);
    third = new node (30);

    // linking node

    head -> prev = NULL;
    head -> next = second;
    
    second -> prev = head;
    second -> next = third;

    third-> prev = secondL;
    third -> next= NULL;

    // printing node

    node *temp =head;
    while( temp != NULL){
        cout<< temp -> data;
        temp = temp ->next;
        

    }
    cout<<"null";
    return 0;
    
 }


 }