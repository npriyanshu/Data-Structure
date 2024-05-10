#include<iostream>
#include<queue>
using namespace std;

class Node  {

    public:
    int data;
    Node* left;
    Node* right;

    Node (int d){
      this->data = d;
      this->left = NULL;
      this->right = NULL;
    }
};


void levelOrderTraversal(Node *root)
{

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete traverse ho gya h
            cout << endl;
            if (!q.empty())
            {
                // q me abhi bhi child nodes hain
                q.push(NULL);
            }
        }
            else
            {
        cout << temp->data <<" ";

                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
        
    }
}


Node* insertIntoBST (Node* &root,int d){
// base case
if(root == NULL) {
    root = new Node(d);
    return root;
}

if(d > root->data){
    root->right = insertIntoBST(root->right,d);
}
else{
    root->left = insertIntoBST(root->left,d);
}
return root;
}


void takeInput(Node* &root){

    int data;
    cin>> data;

    while(data != -1){
        insertIntoBST(root,data);
        cin>>data;
    }
}

Node* minVal(Node* root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}
Node* maxVal(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}


// deletion of a node
Node* deleteFromBST(Node* root,int val){

    // base case
    if(root == NULL) return root;
    if(root->data == val) {
   // 0 child
   if(!root->left && !root->right){
     
     delete root;
     return NULL;
   }

   // 1 child

   // left child
   if(root->left && !root->right){
    Node* temp = root->left;
    delete root;
    return temp;
   }


   // right child
   if(root->right && !root->left){
    Node* temp = root->right;
    delete root;
    return temp;
   }

   // 2 child
if(root->left && root->right){
    // get minimum value from right or max value from left to do this
    int mini = minVal(root->right)->data;
    root->data = mini;
    // delete the minimum value node from right subtree
    root->right = deleteFromBST(root->right,mini);
    return root;
}


    }
    else if (root->data > val){
        // left part me jao
        root->left = deleteFromBST(root->left,val);
        return root;
    }
    else{
        // right part me jao
        root->right = deleteFromBST(root->right,val);
        return root;
    }
}


int main()
{

    Node * root = NULL;

    cout<< "Enter data to createe BST" <<endl;

    takeInput(root);
    levelOrderTraversal(root);
    cout<<endl;
   cout<<"min value is :"<<minVal(root)->data;
    cout<<endl;
    cout<<"max value is :"<<maxVal(root)->data;

    deleteFromBST(root,50);

    levelOrderTraversal(root);


return 0;
}