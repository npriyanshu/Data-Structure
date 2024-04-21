#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};


// ***************  O(n)2 solution ***************************
class Solution {
  public:
  
    int getHeight(Node* root,int height){
        
        // base case 
       if(root == NULL){ 
            return height;
        }
        
        
        int left= getHeight(root->left,height+1);
        int right= getHeight(root->right,height+1);
        
        int ans = max(left,right);
        
        return ans;
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        
        if(root == NULL){
            return 0;
        }
        
        int op1 = diameter(root->left);
        int op2 = diameter(root->right);
        int op3 = getHeight(root->left,0) + getHeight(root->right,0);
        // int op3 = getHeight(root->left) + getHeight(root->right) + 1;
        
        int ans = max(op1,max(op2,op3));
        return ans;
    }
};


// ************ optimal solution ****************************

class Solution2 {
  public:
  
      pair<int,int> diameterFast(Node* root) {
        
        
        if(root == NULL){
            // pair<int,int> p = make_pair(0,0);
            return {0,0};
        }
        
        pair<int,int> left = diameterFast(root->left);
        pair<int,int> right = diameterFast(root->right);
        
        
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second +1;
        
        
        
        pair<int,int> ans;
        ans.first = max(op1,max(op2,op3));
        ans.second = max(left.second,right.second)+1;
        return ans;
    }
    
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
    pair<int,int> ans = diameterFast(root);
    return ans.first;
    }
    
};