#include<iostream>
#include<stack>
using namespace std;
void insert(stack<int>& s,int element) {
// base case
if(s.empty()){
    s.push(element);
    return;
}

int top = s.top();
s.pop();
insert(s,element);
s.push(top);
}
void reverseStack(stack<int> &stack) {
   //base case 
   if(stack.empty()){
       return;
   }

   int top = stack.top();
   stack.pop();
   reverseStack(stack);
   insert(stack,top);
}
int main()
{



return 0;
}