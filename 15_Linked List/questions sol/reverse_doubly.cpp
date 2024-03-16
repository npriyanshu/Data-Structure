#include<iostream>
#include "Node2.cpp"
using namespace std;

Node* reverse(Node* &head){
      // base case 
    if(head == NULL || head->next == NULL){
        return head;
    }
    // reversing other part of list
    // we will get a pointer to head in smallList
    Node* smallHead = reverse(head->next);
    head->next->next = head;
    head->prev = head->next;
    head->next = NULL;
    return smallHead;
}

int main()
{
    Node* n = new Node(1);
    Node* head = n;
    Node* tail = n;
    n->InsertAtTail(n,2);
    n->InsertAtTail(n,3);
    n->InsertAtTail(n,4);
    n->InsertAtTail(n,5);

    head = reverse(head);
    n->printList(head);
    n->printBack(tail);



return 0;
}