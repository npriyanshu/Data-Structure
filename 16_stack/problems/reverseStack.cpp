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
    stack <int> S;

    // pushing some element in the stack
    S.push(10);
    S.push(20);
    S.push(30);
    S.push(40);
    S.push(50);

    // printing all element of the stack
    while(S.empty() == false){
        cout<<S.top()<<" ";
        S.pop();
    }
    cout<<endl;
    S.push(10);
    S.push(20);
    S.push(30);
    S.push(40);
    S.push(50);

reverseStack(S);

    
   

    // printing all element of the stack
    while(S.empty() == false){
        cout<<S.top()<<" ";
        S.pop();
    }




return 0;
}