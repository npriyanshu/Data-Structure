#include<iostream>
#include "Node.cpp"
using namespace std;
int getLength(Node* head){
    int l = 0;
    while(head !=NULL){
    l++;
    head = head->next;
    }
    return l;
}

Node* findMiddle(Node *head) {
    int length = getLength(head);
    int mid = length/2;
    int cnt = 0;
    while(cnt<mid){
        head = head->next;
        cnt++;
    }
    return head;
}

// more optimized solution
Node* getMiddle(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    if(head->next->next == NULL){
        return head->next;
    }

    Node * slow = head;
    Node* fast = head->next;
    
    while(fast != NULL){
        fast = fast->next;
        if(fast !=NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}



int main()
{

Node* n = new Node(2);
Node* head = n;
Node* tail = n;

n->InsertAtHead(head,1);
n->InsertAtTail(tail,3);
n->InsertAtTail(tail,4);
n->InsertAtTail(tail,5);
n->InsertAtTail(tail,6);

n->printList(head);

cout<<"middle node :"<<findMiddle(head)->data<<endl;
cout<<"middle node with getmiddle :"<<getMiddle(head)->data<<endl;


return 0;
}