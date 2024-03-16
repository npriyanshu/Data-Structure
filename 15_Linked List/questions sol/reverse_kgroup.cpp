#include<iostream>
#include "Node.cpp"
using namespace std;


// reverse only if there are at least k nodes 
/*
Node* kReverse(Node* head, int k) {

   // base condition
    if (head == NULL) {
        return NULL;
    }

    // Check if there are at least k nodes remaining in the list
    Node* temp = head;
    int count = 0;
    while (temp != NULL && count < k) {
        temp = temp->next;
        count++;
    }

    // If there are fewer than k nodes remaining, return the current head
    if (count < k) {
        return head;
    }

    // Reverse the first k nodes
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    count = 0;

    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Recursively reverse the remaining nodes
    if (next != NULL) {
        head->next = kReverse(next, k);
    }

    // Return the new head of the reversed list
    return prev;

}  */

Node* kReverse(Node* head,int k){

// base condition

if(head == NULL){
    return NULL;
}

// step 1 : reverse the k Nodes
Node* prev  = NULL;
Node* curr  = head;
Node* next  = NULL;
int count = 0;

while(curr != NULL && count<k){
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    count++;
}

// step 2: 
if(next != NULL){
    head->next = kReverse(next,k);
}

// step 3: return head of reversed list
return prev;
}


bool isCircular(Node* head){
   if(head == NULL){
       return true;
   }
   Node* temp = head->next;

   while(temp != NULL && temp != head ){
    temp = temp->next;
   }
   if(temp == head ){
       return true;
   }

  return false;
}

int main()
{
Node* n = new Node(1);
Node* head = n;
Node* tail = n;
n->InsertAtTail(tail,2);
n->InsertAtTail(tail,3);
n->InsertAtTail(tail,24);
n->InsertAtTail(tail,26);
n->InsertAtTail(tail,226);

Node* ans = kReverse(head,3);
n->printList(ans);

cout<<isCircular(head);


return 0;
}