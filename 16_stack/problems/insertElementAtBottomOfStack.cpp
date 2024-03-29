#include<iostream>
#include<stack>
using namespace std;

// two stack method
void insertAtBottom(stack<int> &stk,int el){
stack<int> temp;

while(!stk.empty()){
  temp.push(stk.top());
  stk.pop();
}
temp.push(el);

while(!temp.empty()) {
    stk.push(temp.top());
    temp.pop();
}
}

// optimized method using recursion
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


int main()
{
stack<int> stk;
stk.push(10);
stk.push(4);
stk.push(3);
stk.push(6);

while(!stk.empty()){
  cout<<(stk.top())<<endl;
  stk.pop();
}

cout<<endl;

stk.push(10);
stk.push(4);
stk.push(3);
stk.push(6);

// insertAtBottom(stk,60);
insert(stk,60);

while(!stk.empty()){
  cout<<(stk.top())<<endl;
  stk.pop();
}

return 0;
}