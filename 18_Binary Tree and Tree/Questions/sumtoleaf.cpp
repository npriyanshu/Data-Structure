#include<iostream>
using namespace std;

//   Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
     
     int solve(TreeNode* root,int sum){
     
     if(root == NULL) return 0;

    sum = (sum*10)+ root->val;

    if(!root->left && !root->right)
    {
        return sum;
    }
    
    int left = solve(root->left,sum);
    int right = solve(root->right,sum);
    
    return left + right;

     }
   
    int sumNumbers(TreeNode* root) {
        int ans = solve(root,0);
        return ans;
    }
};
int main()
{



return 0;
}