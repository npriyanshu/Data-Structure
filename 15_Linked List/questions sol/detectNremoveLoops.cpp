#include<iostream>
#include<map>
#include "Node.cpp"
using namespace std;

// normal loop detection function -> TC : O(n)
bool detectLoop(Node* head){
if(head==NULL){
    return false;
}

Node* temp = head;
map<Node*,bool> visited;


while(temp !=NULL){
   
   if(visited[temp]==true){
    return true;
   }
    visited[temp] = true;
    temp = temp->next;
}
return false;
}

Node* floydCycleDetection(Node* head){
    // if(head == NULL){
    //     return NULL;
    // }

Node* slow = head;
Node* fast = head;

while(slow !=NULL && fast !=NULL){

    fast = fast->next;

    if(fast !=NULL){
    fast = fast->next;
    }

    slow = slow->next;

    if(fast == slow){
        return slow;
        
    }
}
return NULL;

}

Node * loopStartPoint(Node* head){

    if(head == NULL){
        cout<<" NO Node in LL"<<endl;
        return NULL;
    }

Node* interactionPoint = floydCycleDetection(head);

while(head != interactionPoint){
    interactionPoint= interactionPoint->next;
    head = head->next;
}
return interactionPoint;
}

void removeLoop(Node* head){
if(head==NULL){
    return;
}

Node* startOfLoop = loopStartPoint(head);
Node* temp = startOfLoop;
while(temp->next !=startOfLoop){
    temp = temp->next;
}
temp->next = NULL;
}



int main()
{
Node* n = new Node(1);
Node* head = n;
Node* tail = n;
n->InsertAtTail(tail,2);
n->InsertAtTail(tail,3);
n->InsertAtTail(tail,24);
n->InsertAtTail(tail,26);
n->InsertAtTail(tail,226);

tail->next = head->next->next;
// string res = detectLoop(head) ? " there is a cycle in the linked list. " : " there's no cycle in the linked list";
// string res = floydCycleDetection(head) ? " there is a cycle in the linked list : " : " there's no cycle in the linked list";

// cout<<res<<endl;


  cout<<detectLoop(head)<<endl;
  cout<<"loop starts at : "<<loopStartPoint(head)->data<<endl;
  removeLoop(head);
  
  cout<<detectLoop(head)<<endl;


// n->printList(head);

return 0;
}