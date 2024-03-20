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

    // creating destructor to free the memory
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        };  
        cout<<" memory released for data "<<value<<endl;
    }
};

// insertion at head
void InsertAtHead(Node* &head, int d){
     // new node create
    Node* temp = new Node(d);
    temp->next= head;
    head = temp;
  
}

// insertion at tail
void InsertAtTail(Node* &tail, int d){
    // new node create
    Node* temp = new Node(d);
    tail->next= temp;
    tail = temp;
}

// insertion at any position
void InsertAtPosition(Node* &head,Node* &tail,int position,int d){
    if(position == 1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp = head;
    // to count position
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    // inserting at last position
if(temp->next==NULL){
InsertAtTail(tail,d);
return;
}

    // creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

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


// delete at position
void deleteNode(int position,Node* &head,Node* &tail){
    // deleting first node
      if(position == 1){
Node* temp = head;
head = head->next;

temp->next = NULL;
delete temp;
    }
      else{
        // deleting any middle or last node
     Node* curr = head;
     Node* prev = NULL;
    // to count position
    int cnt = 1;
    while(cnt<position){
       prev = curr;
       curr = curr->next;
        cnt++;
    }

    prev->next = curr->next;
    if(prev->next == NULL){
        tail = prev;
    }
    
    curr->next= NULL;
        delete curr;
      } 
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

// insertion at tail
InsertAtTail(tail,40);
InsertAtTail(tail,440);
InsertAtTail(tail,402);

// insertion at any position
InsertAtPosition(head,tail,3,22);
InsertAtPosition(head,tail, 1,21);
InsertAtPosition(head,tail,11,210);
printList(head);

cout<<endl;

// deletion
deleteNode(4,head,tail);
printList(head);
cout<<endl<<tail->data<<endl;

deleteNode(10,head,tail);
printList(head);
cout<<endl<<tail->data<<endl;


// print all elements
printList(head);

return 0;
}