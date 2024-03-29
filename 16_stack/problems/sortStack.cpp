#include<iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int> &s,int element){
if(s.empty() || s.top() <= element){
s.push(element);
return;
}

int top = s.top();
s.pop();
sortedInsert(s,element);
s.push(top);
}

void sortS(stack<int> &s){
	if(s.empty()){
     return;
}

int top = s.top();
s.pop();
sortS(s);
sortedInsert(s,top);
}

stack<int> sortStack(stack<int> &s)
{
sortS(s);
return s;
}
int main()
{



return 0;
}