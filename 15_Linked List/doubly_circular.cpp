#include<iostream>
#include "Node2.cpp"
using namespace std;
int main()
{
    Node* n = new Node(1);
    Node* head = n;
    Node* tail = n;
    n->insertAtTail(head,tail,2);
    n->insertAtTail(head,tail,3);
    n->insertAtTail(head,tail,4);
    n->insertAtTail(head,tail,5);

    n->printList(head);
    n->printBack(tail);



return 0;
}