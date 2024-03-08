#include<iostream>
using namespace std;

class Node
{

public:
int data;
Node* next;
Node* prev;
    Node(int data) {
     this->data = data;
     this->next = NULL;
     this->prev = NULL;
    } 
};

// traversing a list
void printLL(Node *head) {
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

// get length of the linked list
int getLength(Node *head) {
Node* temp = head;
int len = 0;
 while (temp != NULL)
 {
      len++;
// temp ko aage badhao
temp = temp->next;
 }
 return len;
}

// Function to insert a node at the end of Doubly Linked List
void InsertAtHead(Node* &head,int d){
    // create new node
    Node* nn = new Node(d);
    nn->next = head;
    head->prev = nn;

    head = nn;
}

void InsertAtTail(Node* &tail,int d){
    // create new node
    Node* nn = new Node(d);
    tail->next = nn;
    nn->prev = tail;
    tail = nn;
}

int main()
{
    Node * node1 = new Node(100);   

    // head and tail
    Node * head = node1;    
    Node * tail = node1;

    // inserting at head
    InsertAtHead(head,50);
    InsertAtTail(tail,200);

   printLL(head);
    cout <<tail->prev->data<<endl;
   cout<<getLength(head);





return 0;
}