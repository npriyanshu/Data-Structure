#include<iostream>
using namespace std;

class Node
{

public:
int data;
Node* next;
    Node(int data) {
     this->data = data;
     this->next = NULL;
    } 
};

void InsertAtHead(Node* &head, int d){
    // new node create
    Node* temp = new Node(d);
    temp->next= head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d){
    // new node create
    Node* temp = new Node(d);
    tail->next= temp;
    tail = temp;
}

//  traverse a link list
void  printList(Node* &head){
 Node* temp = head;

 while (temp != NULL)
 {
    // temp ko print karao
cout<<temp->data<<" ";
// temp ko aage badhao
temp = temp->next;
 }
 cout<<endl;
 
}

int main()
{

Node* node1 = new Node(30);
cout<<node1->data<<endl;
cout<<node1->next<<endl;

Node* head = node1;
Node* tail = node1;
// insert new nodes at head
InsertAtHead(head,38);
InsertAtHead(head,59);
InsertAtHead(head,203);
InsertAtHead(head,3849);
InsertAtTail(tail,40);
InsertAtTail(tail,440);
InsertAtTail(tail,402);
printList(head);

return 0;
}