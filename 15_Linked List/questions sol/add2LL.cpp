#include<iostream>
#include"Node.cpp"
using namespace std;

void insertAtBack(Node* &head,Node* &tail, int data){
  Node  * temp = new Node(data);
if(head == NULL){
  head = temp;
  tail = temp;    
  return;
}
else{
tail->next = temp;
tail= temp;
}

}

// add func
Node* add (Node* first,Node* second){

  // ans linked list 
Node * resTail = NULL;
Node * resHead = NULL;

int carry = 0; // to store the carry from the sum of two

while(first != NULL || second != NULL || carry != 0) {  

int val1 = 0;
if(first !=NULL){
    val1 = first->data;
}

int val2 = 0;
if(second !=NULL){
    val2 = second->data;
}

int sum = carry + first->data + second->data;
int digit = sum % 10;

// create node and add in ans linked list
insertAtBack(resHead,resTail,digit);
carry = sum/10;    
if(first != NULL){
first = first->next;
}
if(second != NULL){
second = second->next;
}
}

return resHead;
}

// reverse func
  Node* reverse(Node* head){
      Node* curr = head;
      Node* prev = NULL;
      Node* next = NULL;
      
      while(curr!=NULL){
           next = curr->next;
           curr->next = prev;
           prev = curr;
           curr = next;
      }
      return prev;
  }


  // main func

  Node * addLists(Node* head1,Node* head2){
if( head1 == NULL) return NULL; 
if( head2 == NULL) return NULL; 


// reverse both ll 
Node* first  = reverse(head1);
Node* second = reverse(head2);

Node* ans = add(first,second);

// reverse again
return reverse(ans);
  }
  


int main()
{

Node* n1 = new Node(1);
Node* n2 = new Node(5);
Node* head1 = n1;
Node* tail1 = n1;
Node* head2 = n2;
Node* tail2 = n2;
n1->InsertAtTail(tail1,head1,7);
n1->InsertAtTail(tail1,head1,0);


n2->InsertAtTail(tail2,head2,0);
n2->InsertAtTail(tail2,head2,0);

n1->printList(head1);
n2->printList(head2);
Node* ans = NULL;
ans = addLists(head1,head2);

ans->printList(ans);

return 0;
}