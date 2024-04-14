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

node *solve(int In[], int post[], int &index, int inorderStart, int inorderEnd, int n)
{

    if (index < 0 || inorderStart > inorderEnd)
    {
        return NULL;
    }

    // getting index element and updating index
    
    int element = post[index--];
    node *root = new node(element);

    int position = inorderStart;
    findPosition(In, element,inorderStart,inorderEnd,position);


  // recursive calls right
    root->right = solve(In,post, index,position+1,inorderEnd,n);

    // recursive calls left
    root->left = solve(In,post, index,inorderStart,position-1,n);

    return root;

    
}

node *buildTree(int In[], int post[], int n)
{

    // postorder last element always root
    int postOrderIndex = n-1  ;

    node *ans = solve(In, post, postOrderIndex, 0, n - 1, n);

    return ans;
}

int main()
{

    int In[] = {1, 6, 8, 7};
    int post[] = {1, 6, 7, 8};
    node *root = NULL;
    buildTree(In, post, 4);

    return 0;
}