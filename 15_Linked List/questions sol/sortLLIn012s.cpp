#include<iostream>
#include "Node.cpp"
using namespace std;

// first approach replacing data 
Node* sortList(Node *head){

    if(head == NULL) return NULL;
    // counts
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    Node* temp = head;

    // traverse and count ll
    while(temp !=NULL){

        if(temp->data==0){
            zeroCount++;
        }
       else if(temp->data==1){
            oneCount++;
        }
    else if(temp->data == 2){
        twoCount++;
    }

        temp = temp->next;
    }

   temp = head;
    while(temp !=NULL){
        if(zeroCount !=0){
        temp->data = 0;
        zeroCount--;
    }
    else if(oneCount !=0){
        temp->data = 1;
        oneCount--;
    }
    else if(twoCount !=0){
        temp->data = 2;
        twoCount--;
    }
    temp = temp->next;

    }

return head;
}

// second approach data replacement is not allowed

void populate(Node* &tail, Node* curr){
    tail->next = curr;
    tail = curr;
}

Node* segregateLL(Node *&head){
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;

    while (curr!=NULL)
    {
        int value = curr->data;
        if(value == 0){
            populate(zeroTail, curr);
        }
        else if(value == 1){
            populate(oneTail, curr);
        }
        else if(value == 2){
            populate(twoTail, curr);
        }
        curr = curr->next;
    }

    // merge

     if(oneHead->next != NULL){
        zeroTail->next = oneHead->next;
     }
     else{
     zeroTail->next = twoHead->next;
     }

     oneTail->next = twoHead->next;
     twoTail->next = NULL;

    head = zeroHead->next;
    zeroHead ->next = NULL;
    oneHead ->next = NULL;
    twoHead ->next = NULL;
     delete zeroHead;
     delete oneHead;
     delete twoHead;

return head;    

}

int main()
{
Node* n = new Node(1);
Node* head = n;
Node* tail = n;
n->InsertAtTail(tail,0);
n->InsertAtTail(tail,1);
n->InsertAtTail(tail,2);
n->InsertAtTail(tail,0);
n->InsertAtTail(tail,0);
n->InsertAtTail(tail,1);
n->InsertAtTail(tail,1);
n->InsertAtTail(tail,2);
n->InsertAtTail(tail,0);
n->InsertAtTail(tail,2);
n->InsertAtTail(tail,2);

segregateLL(head);
n->printList(head);

return 0;
}