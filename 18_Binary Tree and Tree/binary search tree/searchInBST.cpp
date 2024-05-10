#include<iostream>
#include<vector>
using namespace std;
 template <typename T>
    class BinaryTreeNode
    {
    public:
        T data;
        BinaryTreeNode<T> *left, *right;
        BinaryTreeNode() : data(0), left(NULL), right(NULL) {}
        BinaryTreeNode(T x) : data(x), left(NULL), right(NULL) {}
        BinaryTreeNode(T x, BinaryTreeNode<T> *left, BinaryTreeNode<T> *right) : data(x), left(left), right(right) {}
    };

// recursively
bool searchInBST(BinaryTreeNode<int> *root, int x) {
 if( root == NULL) return false;

if (root->data == x) return true;

bool ans;

if(root->data < x){
  ans = searchInBST(root->right,x);
}
else{
  ans = searchInBST(root->left,x);
}
return ans;
}

// iteratively
bool Search(BinaryTreeNode<int> *root, int x){
    BinaryTreeNode<int> *temp = root;

    while(temp != NULL){

       if(temp->data == x) return true;

       if(temp->data < x ) temp = temp->right;
       else if(temp->data > x ) temp = temp->left;
    }

return false;
}

int main()
{



return 0;
}