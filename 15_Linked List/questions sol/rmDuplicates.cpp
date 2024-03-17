#include<iostream>
#include "Node.cpp"
using namespace std;

// for sorted linked list
Node* removeDuplicatesSorted(Node* head){
    // empty
if(head == NULL){
    return NULL;
}
 // non-empty
 Node* curr = head;

 while(curr !=NULL){

    if((curr->next !=NULL) &&curr->data == curr->next->data ){
         Node* next = curr->next->next;
         Node* nodeToDelete = curr->next;
         nodeToDelete->next =NULL;
        delete (nodeToDelete);
        curr->next = next;
    }
    else{
        curr = curr->next;
    }
 }

return head;

}

// for unsorted linked list

Node * removeDuplicatesUnsorted(Node* head){

    if(head == NULL){
        return NULL;
}
    Node* curr = head;
    while(curr!=NULL){
        Node* temp = curr->next;
        Node* prev = curr;
        while(temp != NULL){
         if(curr->data == temp->data){
            prev->next = temp->next;
            temp->next = NULL;
            delete temp;
            temp = prev->next;
          prev = temp;
          // if temp is not null 
          temp = temp?temp->next:NULL;
         }
        else{
         prev = temp;
          temp = temp?temp->next:NULL;
        // cout<<temp->data<<endl;

        }
         
        }
        // if it is last node
        curr = curr->next;
    }
    return head;
}

// we can solve this by map also 


int main()
{
Node* n = new Node(1);
Node* head = n;
Node* tail = n;
n->InsertAtTail(tail,2);
n->InsertAtTail(tail,2);
n->InsertAtTail(tail,3);
n->InsertAtTail(tail,3);
n->InsertAtTail(tail,24);
n->InsertAtTail(tail,25);
n->InsertAtTail(tail,2);
n->InsertAtTail(tail,3);
n->InsertAtTail(tail,26);
n->InsertAtTail(tail,3);

n->printList(head);
// removeDuplicatesSorted(head);
removeDuplicatesUnsorted(head);
n->printList(head);



return 0;
}