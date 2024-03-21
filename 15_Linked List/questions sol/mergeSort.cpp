#include<iostream>
#include"Node.cpp"
using namespace std;
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node* findMid(Node* head){
	Node* slow = head;
	Node* fast = head->next;

	while(fast != NULL && fast->next !=NULL){
    slow = slow->next;
	fast = fast->next->next;
	}
	return slow;
}


Node* merge(Node* left,Node* right){

if(left == NULL){
	return right;
}

if(right == NULL){
	return left;
}

   Node* ans = new Node(-1);
   Node* temp = ans;

// merge two sorted Linked List
   while(left != NULL && right !=NULL){
	   if(left->data < right->data){
		   temp ->next = left;
		   temp = left;
		   left = left->next;
	   }
	   else{
		   temp ->next = right;
		   temp = right;
		   right = right ->next;
	   }
   }

   while(left !=NULL){
	      temp ->next = left;
		   temp = left;
		   left = left->next;
   }

   while(right !=NULL){
		   temp ->next = right;
		   temp = right;
		   right = right ->next;
   }
 
 // moving one step ahead of dummy node with val -1;
 ans = ans->next;
 return ans;
}


Node *mergeSort(Node *head)
{
	if(head==NULL || head->next == NULL){
		return head;
	}

// break linkes into two halves
	Node* mid = findMid(head);
    
// after finding mid
	Node* left = head;
	Node* right = mid->next;
	mid->next = NULL;

	// divide it into two halves
	// through recursive call
	
	left = mergeSort(left);
	right = mergeSort(right);

	// merge both 
   Node* result = merge(left,right);

   return result;
}

int main()
{



return 0;
}