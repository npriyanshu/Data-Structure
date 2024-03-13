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
        cout<<" memory released for data "<<value<<endl;
    }
};

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

void  printList(Node* &head){
 Node* temp = head;
 while (temp != NULL)
 {
cout<<temp->data<<" ";
temp = temp->next;
 }
 cout<<endl;
 
}


Node* reverseLL(Node* &head,Node* &tail){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
   Node* forward;
   tail = head;
   while(curr!=NULL){
     forward = curr->next;
     curr->next = prev;
     prev = curr;
     curr = forward;
   }
     head = prev;
     return prev;
}

// reversing a ll using recursive function

void solve1(Node* &head,Node* curr,Node* prev){

    // base case
    if(curr == NULL){
        head = prev;
        return;
    }
    Node* forward = curr->next;
    solve1(head,forward,curr);
    curr->next = prev;
   
}

Node* solve2(Node* &head){
    // base case 
    if(head == NULL || head->next == NULL){
        return head;
    }
    // reversing other part of list
    // we will get a pointer to head in smallList
    Node* smallHead = solve2(head->next);
    head->next->next = head;
    head->next = NULL;
    return smallHead;

}
Node* reverse(Node* &head,Node* &tail){

    // for solve 1
    // if(head == NULL || head->next == NULL){
    //     return head;
    // }
    // Node* prev = NULL;
    // Node* curr = head;
    // tail = curr;
    // solve1(head,curr,prev);
    //  return head;



// for solve 2
     tail = head;
     head = solve2(head);
     return head;
}




int main()
{
Node * n = new Node(1);
Node * head = n;
Node * tail = n;

InsertAtHead(head,2);
InsertAtHead(head,3);
InsertAtHead(head,4);
InsertAtHead(head,543);
InsertAtHead(head,25);
InsertAtHead(head,54);
InsertAtHead(head,522);

printList(head);
cout<<"head :"<<head->data<<" tail :"<<tail->data<<endl;
reverse(head,tail);
cout<<"head :"<<head->data<<" tail :"<<tail->data<<endl;
printList(head);


return 0;
}