#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void interleave(queue<int>& q){

int n = (q.size())/2;


stack<int> s;

while(n--){
    int f = q.front();
    q.pop();
    s.push(f);
}

while(!s.empty()){
    q.push(s.top());
    s.pop();
}

n = (q.size())/2;
int t = q.size() - n;

while(t--){
    q.push(q.front());
    q.pop();
}

while(n--){
    int f = q.front();
    s.push(f);
    q.pop();
}

while(!s.empty()){
    q.push(s.top());
    s.pop();
    q.push(q.front());
    q.pop();
}

}

void printQ(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main()
{

queue<int> q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);
q.push(6);
q.push(7);
q.push(8);
printQ(q);
cout<<endl;
interleave(q);
printQ(q);


return 0;
}