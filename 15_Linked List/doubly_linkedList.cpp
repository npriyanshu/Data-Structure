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

// print backward function
void printBack(Node *tail) {
Node* temp = tail;
 while (temp!= NULL)
 {
// temp ko print karao
cout<<temp->data<<" ";
// temp ko aage badhao
temp = temp->prev;
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
void insertAtHead(Node* &head,Node* &tail,int d){

    // if empty list
// head == null 
if(head ==NULL){
 Node* nn = new Node(d);
    head = nn;
    tail = nn;
}
else{
    // create new node
    Node* nn = new Node(d);
    nn->next = head;
    head->prev = nn;
    head = nn;
}
}



void insertAtTail(Node* &head,Node* &tail,int d){
        // if empty list
// head == null 
if(tail ==NULL){
 Node* nn = new Node(d);
    tail = nn;
    head = nn;
}
else{
        // create new node
    Node* nn = new Node(d);
    tail->next = nn;
    nn->prev = tail;
    tail = nn;
}
}



void insertAtPosition(Node* &head,Node* &tail, int position, int data){

if(position == 1){
    insertAtHead(head,tail,data);
    return;
}
else{
    // go to that postion
    Node * temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
// if last
if(temp->next == NULL){
   insertAtTail(head,tail,data);
   return;
}

// create a node to add
Node* newNode = new Node(data);
newNode->prev = temp;
newNode->next = temp->next;
temp->next->prev = newNode;
temp->next = newNode;  
}

}

// delete a Node
void deleteNode(int position,Node* &head,Node* &tail){
    // deleting first node
      if(position == 1){
Node* temp = head;
temp->next->prev = NULL;
head = temp->next;
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

// if last node
    if(prev->next == NULL){
    tail =prev;      
    curr->prev= NULL;
    curr->next= NULL;
    delete curr;
    return;
    }
 // node between head and tail   
     prev->next->prev = prev;
     curr->prev= NULL;
    curr->next= NULL;
    delete curr;
 
      } 
}

int main()
{
    // Node * node1 = new Node(100);   

    // head and tail
    Node * head = NULL;    
    Node * tail = NULL;

    // inserting at head
    insertAtHead(head,tail,100);
    insertAtTail(head,tail,200);

   printLL(head);
   cout <<tail->prev->data<<endl;

// inserting at position 4
insertAtPosition(head,tail,getLength(head)+1,300);
insertAtPosition(head,tail,getLength(head)+1,400);
insertAtPosition(head,tail,getLength(head)+1,500);

deleteNode(2,head,tail);
deleteNode(4,head,tail);
 printLL(head);
 printBack(tail);
cout<<tail->data<<endl;

cout<<getLength(head)<<endl;


return 0;
}