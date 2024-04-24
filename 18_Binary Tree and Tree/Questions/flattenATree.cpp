#include<iostream>
#include<vector>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

class Solution
{
    public:
   
    Node* findPred(Node* curr){
       
    Node* prev = curr->left;
    while(prev->right != NULL){
        prev = prev->right;
    }
    return prev;
    }
   
    void flatten(Node *root)
    {
        Node* current = root;
       
        while(current != NULL){
           
            if(current->left){
                Node* pred = findPred(current);
                pred->right = current->right;
                current->right = current->left;
                current->left = NULL;
            }
            current = current->right;
        }
    }
};
int main()
{



return 0;
}