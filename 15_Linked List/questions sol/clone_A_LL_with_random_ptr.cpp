#include <bits/stdc++.h>
#include<map>
using namespace std;
/* Link list Node */
struct Node {
    int data;
    Node *next;
    Node *arb;

    Node(int x) {
        data = x;
        next = NULL;
        arb = NULL;
    }
};

class Solution
{
    private:
    void insertAtTail(Node* &head, Node* &tail, int d){
        Node* nextNode = new Node(d);
        if(head ==NULL){
            head = nextNode;
            tail = nextNode;
            return;
        }
        else{
            tail->next = nextNode;
            tail = nextNode;
        }
    }
    
    public:
    Node *copyList(Node *head)
    {
        // step 1: create a clone List
        Node * cloneHead = NULL;
        Node * cloneTail = NULL;
        
        Node* temp = head;
        // keep copying in clone list
        while(temp != NULL){
            insertAtTail(cloneHead,cloneTail,temp->data);
            temp = temp->next;
        }
        
        // step 2: create data map
        unordered_map<Node*,Node*> oldToNewNode;
        
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        while(originalNode != NULL && cloneNode !=NULL){
            oldToNewNode[originalNode] = cloneNode;
            originalNode = originalNode->next;
            cloneNode = cloneNode ->next;
        }
        
        originalNode = head;
        cloneNode = cloneHead;
        
        while(originalNode !=NULL){
            cloneNode ->arb = oldToNewNode[originalNode->arb];
            originalNode = originalNode -> next;
            cloneNode = cloneNode ->next;
        }
        return cloneHead;
    }

};





















// //{ Driver Code Starts
// #include <bits/stdc++.h>

// using namespace std;
// /* Link list Node */
// struct Node {
//     int data;
//     Node *next;
//     Node *arb;

//     Node(int x) {
//         data = x;
//         next = NULL;
//         arb = NULL;
//     }
// };



// // } Driver Code Ends

// #include<map>
// class Solution
// {
//     private:
//     void insertAtTail(Node* &head, Node* &tail, int d){
//         Node* nextNode = new Node(d);
//         if(head ==NULL){
//             head = nextNode;
//             tail = nextNode;
//             return;
//         }
//         else{
//             tail->next = nextNode;
//             tail = nextNode;
//         }
//     }
    
//     public:
//     Node *copyList(Node *head)
//     {
//         // step 1: create a clone List
//         Node * cloneHead = NULL;
//         Node * cloneTail = NULL;
        
//         Node* temp = head;
//         // keep copying in clone list
//         while(temp != NULL){
//             insertAtTail(cloneHead,cloneTail,temp->data);
//             temp = temp->next;
//         }
        
//         // step 2: create data map
//         unordered_map<Node*,Node*> oldToNewNode;
        
//         Node* originalNode = head;
//         Node* cloneNode = cloneHead;
//         while(originalNode != NULL && cloneNode !=NULL){
//             oldToNewNode[originalNode] = cloneNode;
//             originalNode = originalNode->next;
//             cloneNode = cloneNode ->next;
//         }
        
//         originalNode = head;
//         cloneNode = cloneHead;
        
//         while(originalNode !=NULL){
//             cloneNode ->arb = oldToNewNode[originalNode->arb];
//             originalNode = originalNode -> next;
//             cloneNode = cloneNode ->next;
//         }
//         return cloneHead;
//     }

// };

// //{ Driver Code Starts.


// void print(Node *root) {
//     Node *temp = root;
//     while (temp != NULL) {
//         int k;
//         if (temp->arb == NULL)
//             k = -1;
//         else
//             k = temp->arb->data;
//         cout << temp->data << " " << k << " ";
//         temp = temp->next;
//     }
// }


// void append(Node **head_ref, Node **tail_ref, int new_data) {

//     Node *new_node = new Node(new_data);
//     if (*head_ref == NULL) {
//         *head_ref = new_node;
//     } else
//         (*tail_ref)->next = new_node;
//     *tail_ref = new_node;
// }

// bool validation(Node *head, Node *res) {


//     Node *temp1 = head;
//     Node *temp2 = res;

//     int len1 = 0, len2 = 0;
//     while (temp1 != NULL) {
//         len1++;
//         temp1 = temp1->next;
//     }
//     while (temp2 != NULL) {
//         len2++;
//         temp2 = temp2->next;
//     }

//     /*if lengths not equal */

//     if (len1 != len2) return false;

//     temp1 = head;
//     temp2 = res;
//     map<Node*,Node*> a;
//     while (temp1 != NULL) {
        
//         if(temp1==temp2)
//             return false;
        
//         if (temp1->data != temp2->data) return false;
//         if (temp1->arb != NULL and temp2->arb != NULL) {
//             if (temp1->arb->data != temp2->arb->data)
//                 return false;
//         } else if (temp1->arb != NULL and temp2->arb == NULL)
//             return false;
//           else if (temp1->arb == NULL and temp2->arb != NULL)
//             return false;
//         a[temp1]=temp2;
//         temp1 = temp1->next;
//         temp2 = temp2->next;
//     }
    

//     temp1 = head;
//     temp2 = res;
//     while (temp1 != NULL) {
        
//         if (temp1->arb != NULL and temp2->arb != NULL) {
//             if (a[temp1->arb] != temp2->arb) return false;
//         }
//         temp1 = temp1->next;
//         temp2 = temp2->next;
//     }
//     return true;
// }


