// break a cicular ll n two half circular linked lists
#include<iostream>
#include "Node3.cpp"
using namespace std;

pair<Node*,Node*> makeHalf(Node* head,int length){
if(head==NULL || head->next == NULL) return {head, NULL};

int mid = length/2;
Node* first = head;
int cnt = 1;

while(cnt<=mid && first!=NULL){
first = first->next;
cnt++;
}

Node* second = first->next;
first->next = head;
Node* secondHead = second;
while(second->next !=head){
second = second->next;
}
second->next = secondHead;
return {head,secondHead};

}

int main()
{

Node* n = new Node(1);
Node* tail = n;

n->InsertNode(tail,1,2);
n->InsertNode(tail,2,3);
n->InsertNode(tail,3,4);
n->InsertNode(tail,4,7);
n->InsertNode(tail,4,6);
n->InsertNode(tail,4,5);
n->InsertNode(tail,4,9);
n->InsertNode(tail,4,8);
n->InsertNode(tail,4,5);


n->print(tail);

pair<Node*,Node*> half = makeHalf(tail,n->getLength(tail));

n->print(half.first);
n->print(half.second);


return 0;
}