#include<iostream>
#include<vector>
#include "Node.cpp"
using namespace std;

//************************** FUNCTION 1***********************
bool checkPalindrom(vector<int> v){
    int i = 0;
    int j = v.size()-1;
    while(i<=j){
        if(v[i] != v[j]){
            return false;
        }
            i++;
            j--;
    }
    return true;
}

bool solve(Node* head){
    vector<int> v;
    Node* temp = head;
    while(temp !=NULL){
       v.push_back(temp->data);
       temp = temp->next;
    }

    return checkPalindrom(v);

}


//************************** FUNCTION 1******************************

 
 Node* getMid(Node* head){
       Node* slow = head; 
       Node* fast = head->next; 
       
       while(fast !=NULL && fast->next!=NULL){
           fast = fast->next;
           if(fast->next !=NULL){
           fast = fast->next;
           }
           slow = slow->next;
       }
       return slow;
   }
   
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
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head->next == NULL){
            return true;
        }
        
        // step 1 : find middle
        Node* middle = getMid(head);
        Node* secondHead = middle->next;
        
        // step 2: reverse nodes after middle
        middle->next = reverse(secondHead);
        
        // step 3: compare both halves
        
        Node* head1 = head;
        Node* head2 = middle->next;
        
        while(head2 != NULL){
            if(head1->data != head2->data){
                return false;
            }
            head1  = head1->next;
            head2 = head2->next;
        }
        
        // step 4: repeat step 2
        secondHead = middle->next;
        middle->next = reverse(secondHead);
        
        return true;
        
    }

int main()
{
    Node* n = new Node(1);
    Node* tail = n;
    Node* head = n;

    n->InsertAtTail(tail,2);
    n->InsertAtTail(tail,2);
    n->InsertAtTail(tail,1);
    n->InsertAtTail(tail,1);

    cout<<solve(head)<<endl;

    n->printList(head);



return 0;
}