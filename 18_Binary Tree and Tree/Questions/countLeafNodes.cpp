#include<iostream>
using namespace std;

/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
void solve(int& count,BinaryTreeNode<int> *root){
if(root == NULL){
    return;
}

if(root->left == NULL && root->right == NULL){
    count++;
}

// left
solve(count,root->left);

// right
solve(count,root->right);

}
int noOfLeafNodes(BinaryTreeNode<int> *root){
   int count = 0;
   solve(count,root);
   return count;

}

int main()
{



return 0;
}