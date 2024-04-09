#include<iostream>
using namespace std;
class Node
{

public:
int data;
Node* next;
            Node(){
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }

    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        };  
    }


    void InsertAtHead(Node* &head, int d){

    Node* temp = new Node(d);
    temp->next= head;
    head = temp;
  
}
void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next= temp;
    tail = temp;
}

void InsertAtPosition(Node* &head,Node* &tail,int position,int d){
    if(position == 1){
        InsertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
if(temp->next==NULL){
InsertAtTail(tail,d);
return;
}

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

// delete at position
void deleteNode(int position,Node* &head,Node* &tail){
    if(head == NULL || position < 1)    
       return;        
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



void  printList(Node* &head){
 Node* temp = head;
 while (temp != NULL)
 {
cout<<temp->data<<" ";
temp = temp->next;
 }
 cout<<endl;
 
}


};