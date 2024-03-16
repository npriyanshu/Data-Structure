#include<iostream>
#include "Node3.cpp"
using namespace std;
bool isCircular(Node* head){
   if(head == NULL ){
       return true;
   }
   Node* temp = head->next;

   while(temp != NULL && temp != head ){
    temp = temp->next;
   }
   if(temp == head ){
       return true;
   }

  return false;
}
int main()
{
Node* n = new Node(1);
Node* tail = n;
cout<<isCircular(tail)<<endl;
n->print(tail);


return 0;
}