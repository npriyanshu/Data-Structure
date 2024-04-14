#include <iostream>
#include <queue>
#include "Binary_Tree_cls.cpp"
using namespace std;


// now this function also works well with  nodes that have duplicate values
void findPosition(int In[], int element,int inStart, int inEnd ,int &inIndex)
{

    while (inIndex <= inEnd) {
        if (In[inIndex] == element) {
            break;
        }
        inIndex++;
    }
}

node *solve(int In[], int pre[], int &index, int inorderStart, int inorderEnd, int n)
{

    if (index >= n || inorderStart > inorderEnd)
    {
        return NULL;
    }

    int element = pre[index++];
    node *root = new node(element);

    int position = inorderStart;
    findPosition(In, element,inorderStart,inorderEnd,position);

    // recursive calls left
    root->left = solve(In,pre, index,inorderStart,position-1,n);
 
    // recursive calls right
    root->right = solve(In,pre, index,position+1,inorderEnd,n);

    return root;

    
}

node *buildTree(int In[], int pre[], int n)
{

    // preorders first element always root
    int preOrderIndex = 0;

    node *ans = solve(In, pre, preOrderIndex, 0, n - 1, n);

    return ans;
}

int main()
{

    int In[] = {1, 6, 8, 7};
    int pre[] = {1, 6, 7, 8};
    node *root = NULL;
    buildTree(In, pre, 4);

    return 0;
}



//{ Driver Code Starts
//

// #include<bits/stdc++.h>
// using namespace std;

// struct Node
// {
// 	int data;
// 	struct Node *left;
// 	struct Node *right;
	
// 	Node(int x){
// 	    data = x;
// 	    left = NULL;
// 	    right = NULL;
// 	}
// };


// void printPostOrder(Node *root)
// {
// 	if(root==NULL)
// 		return;
// 	printPostOrder(root->left);
// 	printPostOrder(root->right);
// 	cout<<root->data<<" ";
// }

// // } Driver Code Ends

// /*Complete the code here.
// Node is as follows:
// struct Node
// {
//   int data;
//   Node* left;
//   Node* right;
// };
// */
// class Solution{
//     public:
    
//     // Normal solution this does not handle the nodes with same data values
// // ***************************************************************************************


// //     void createMapping(int In[], map<int,int>& nodeToIndex, int n)
// // {

// //     for (int i = 0; i < n; i++)
// //     {
// //          nodeToIndex[In[i]] = i;
        
// //     }
// // }

// // Node *solve(int In[], int pre[], int &index,map<int,int> &nodeToIndex, int inorderStart, int inorderEnd, int n)
// // {

// //     if (index >= n || inorderStart > inorderEnd)
// //     {
// //          if (index >= n){
// //             cout<<"index >= n";
// //          }
// //          if ( inorderStart > inorderEnd){
// //             cout<<inorderStart<<" s : e "<<inorderEnd<<endl;
// //              cout<<"inorderStart > inorderEnd"<<endl;
// //          }
// //         cout<<"null for index :"<<index<<endl;
// //         return NULL;
// //     }
    

// //     int element = pre[index++];

// //     cout<<"element "<<element<<" index "<<index-1<<endl;

// //     Node *root = new Node(element);

// //     int position = nodeToIndex[element];
// //     // int position = findPosition(In, element, n);


// //             cout<<inorderStart<<" s : e "<<inorderEnd<<endl;   

// //     // recursive calls left
// //     cout<<"left of element :"<< element<<endl;
// //     root->left = solve(In,pre, index,nodeToIndex,inorderStart,position-1,n);
 
// //     cout<<"right of element :"<< element<<endl;
// //     // recursive calls right
// //     root->right = solve(In,pre, index,nodeToIndex,position+1,inorderEnd,n);

// //     return root;

    
// // }

// //     Node* buildTree(int In[],int pre[], int n)
// //     {
// //         int preOrderIndex = 0;
// //         map<int,int> nodeToIndex;
        
// //         // create node to index ma
// //         createMapping(In,nodeToIndex,n);

// //     Node *ans = solve(In, pre, preOrderIndex,nodeToIndex, 0, n - 1, n);

// //     return ans;
// //     }



// //**********************************************************************************************************//

// Node* buildTreeUtil(int inorder[], int preorder[], int inStart, int inEnd, int& preIndex) {
//     if (inStart > inEnd) {
//         return nullptr;
//     }

//     int currRootVal = preorder[preIndex++];
//     Node* root = new Node(currRootVal);

//     int inIndex = inStart;
//     while (inIndex <= inEnd) {
//         if (inorder[inIndex] == currRootVal) {
//             break;
//         }
//         inIndex++;
//     }

//     root->left = buildTreeUtil(inorder, preorder, inStart, inIndex - 1, preIndex);
//     root->right = buildTreeUtil(inorder, preorder, inIndex + 1, inEnd, preIndex);

//     return root;
// }

// Node* buildTree(int inorder[], int preorder[], int n) {
//     int preIndex = 0;
//     return buildTreeUtil(inorder, preorder, 0, n - 1, preIndex);
// }


// };

// //{ Driver Code Starts.
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
		
// 		int inorder[n], preorder[n];
// 		for(int i=0; i<n; i++)
// 			cin>> inorder[i];
// 		for(int i=0; i<n; i++)
// 			cin>> preorder[i];
// 		Solution obj;
// 		Node *root = obj.buildTree(inorder, preorder, n);
// 		printPostOrder(root);
// 		cout<< endl;
// 	}
// }
