#include<iostream>
#include<queue>
using namespace std;
int main()
{
queue<string> q;

 q.push("pinchu");
 q.push("bhai");
 q.push("negi");

cout<<" size before :"<<q.size()<<endl;
 // queue works on first in first out
// print the front element
cout<<" front element :"<<q.front()<<endl;

// pop the front element
q.pop();
cout<<" front element :"<<q.front()<<endl;

cout<<" size after :"<<q.size()<<endl;

return 0;
}