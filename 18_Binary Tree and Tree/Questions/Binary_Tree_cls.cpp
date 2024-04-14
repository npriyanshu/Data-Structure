#include<iostream>
#include<queue>
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

// preOrder -> LNR (node letf right)
void preOrder (node* root){
if(root == NULL){
    return;
}
cout<<root->data<<" ";

// left
preOrder(root->left);

// right
preOrder(root->right);

}

//inOrder -> LNR (left node right)
void inOrder (node* root){
if(root == NULL){
    return;
}
// left
inOrder(root->left);

cout<<root->data<<" ";

// right
inOrder(root->right);
}

//postOrder -> LRN (left right node)
void postOrder (node* root){
if(root == NULL){
    return;
}
// left
postOrder(root->left);
// right
postOrder(root->right);

cout<<root->data<<" ";
} 




void buildFromLeveOrder(node* &root)
{
queue<node* >q;
cout<<"Enter data for root :";
int data;
cin>>data;
root = new node(data);
q.push(root);

while(!q.empty()){
    node* temp = q.front();
    q.pop();

    cout<<" Enter left node for "<<temp->data <<endl;
    int leftData;
    cin>> leftData;

    if(leftData !=-1){
        temp->left = new node(leftData);
        q.push(temp->left);
    }

    cout<<" Enter right node for "<<temp->data <<endl;
    int rightData;
    cin>> rightData;

    if(rightData !=-1){
        temp->right = new node(rightData);
        q.push(temp->left);
    }
}

}


};
