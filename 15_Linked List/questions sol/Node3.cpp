#include<iostream>
using namespace std;
class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = this;
    }
    // creating destructor to free the memory
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        };
        cout << " memory released for data " << value << endl;
    }

    
void InsertNode(Node *&tail, int element, int d)
{
    // first case empty list
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        temp->next = temp;
        return;
    }
    else
    {
        Node *curr = tail; // Start from the head (tail->next) of the list
        while (curr->data != element)
        {
            curr = curr->next;
        }
       
        Node *newNode = new Node(d);
        newNode->next = curr->next;
        curr->next = newNode;

       
    }
}

void print(Node *tail)
{
    Node *temp = tail;
    // empty list
 if(tail == NULL){
    cout<<" Linked List is Empty!"<<endl;
    return;
 }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout<<endl;

}

// delete

void deleteNode(Node* &tail,int value){

    // if empty list
    if(tail == NULL){
        cout<<"linked list is empty"<<endl;
        return;
    }
    else{
  // assuminig that value is present in
        // the list
        Node* prev = tail;
        Node* curr = tail->next;

        // find element to delete

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
  // single node LL
  if(prev == curr){
    tail = NULL; 
  }
// <=2 node LL
else if(curr==tail){
    tail = prev;
}

        curr->next = NULL;
        delete curr;
    }
}
};

