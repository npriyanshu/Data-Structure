#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// in pre order
node *buildTree(node *root)
{
    cout << "Enter the data : ";
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << " Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << " Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

// void levelOrderTraversal(node* root){

// queue<node*> q;
// q.push(root);

// while(!q.empty()){
//     node* temp = q.front();
//     cout<<temp->data<<endl;
//     q.pop();
//     if(temp->left){
//         q.push(temp->left);
//     }
//     if(temp->right){
//         q.push(temp->right);
//     }
// }
// }

// same function with separator logic
void levelOrderTraversal(node *root)
{

    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
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
            cout << temp->data << " ";

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

// preOrder -> LNR (node letf right)
void preOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";

    // left
    preOrder(root->left);

    // right
    preOrder(root->right);
}

// inOrder -> LNR (left node right)
void inOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    // left
    inOrder(root->left);

    cout << root->data << " ";

    // right
    inOrder(root->right);
}

// postOrder -> LRN (left right node)
void postOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    // left
    postOrder(root->left);
    // right
    postOrder(root->right);

    cout << root->data << " ";
}

void buildFromLeveOrder(node *&root)
{
    queue<node *> q;
    cout << "Enter data for root :";
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << " Enter left node for " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << " Enter right node for " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->left);
        }
    }
}


// preorder using stack
void iterativePreOrder(node *root)
{

    if (root == NULL)
    {
        return;
    }

    stack<node *> st;
    st.push(root);

    while (!st.empty())
    {

        node *temp = st.top();
        st.pop();

        cout << temp->data << " ";

        // pushing right first because as we know we are printing top element first
        // so we want to print left first so we push right first
        // because NLR -> preOrder

        if (temp->right)
            st.push(temp->right);

        if (temp->left)
            st.push(temp->left);
    }
}

// post order with two stack method
void iterativePostOrder(node *root)
{
    if (root == NULL) 
        return; 
  
    // Create two stacks 
    stack<node *> s1, s2; 
  
    // push root to first stack 
    s1.push(root); 
    node* temp; 
  
    // Run while first stack is not empty 
    while (!s1.empty()) { 
        // Pop an item from s1 and push it to s2 
        temp = s1.top(); 
        s1.pop(); 
        s2.push(temp); 
  
        // Push left and right children 
        // of removed item to s1 
        if (temp->left) 
            s1.push(temp->left); 
        if (temp->right) 
            s1.push(temp->right); 
    } 
  
    // Print all elements of second stack 
    while (!s2.empty()) { 
        temp = s2.top(); 
        s2.pop(); 
        cout << temp->data << " "; 
    } 
}



// inorder

void IterativeInOrder(node* root){

  stack<node*> st;
  node * curr = root;
  while(true){
   
   if(curr != NULL){
 
    st.push(curr);
    curr = curr->left;
   }
   else{
if(st.empty()) return;

curr = st.top();
st.pop();

cout<<curr->data<<" ";

curr = curr->right;

   }
  }

}


node* findPred(node* curr){
    node* n = curr;
    n = n->left;
    while(n->right !=NULL && n->right != curr){
        n = n->right;
    }
    return n;
}

void morrisTrev(node* root){

node* current = root;

while(current !=NULL){
    // if left not exists visit current
    if(!current->left){
        cout<<current->data<<" ";
        current = current->right;
    }
    else{
        node* pred = findPred(current);
        if(pred->right == NULL){
            pred->right = current;
            current = current->left;
        }
       else{
        pred->right = NULL;
        cout<<current->data<<" ";
        current = current->right;
       }
    }
}


}






int main()
{

    node *root = NULL;

    root = buildTree(root);
    //  buildFromLeveOrder(root);

    //  build from levelorder -> 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    // data of tree => 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level order
    levelOrderTraversal(root);
    // cout<<endl;
    // cout << "preOrder" << endl;
    // preOrder(root);
    // cout << endl;
    cout<<"inOrder"<<endl;
    inOrder(root);
    cout<<endl;
    // cout<<"postOrder"<<endl;
    // postOrder(root);
    // cout<<endl;

    // iterativePostOrder(root);
    IterativeInOrder(root);
    cout<<"\n morris treversal "<<endl;
    morrisTrev(root);


    return 0;
}