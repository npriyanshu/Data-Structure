#include<iostream>
#include<queue>
#include<stack>
using namespace std;

// using stack
// class Solution
// {
//     public:
//     queue<int> rev(queue<int> q)
//     {
//         stack<int> s;
        
//         while(!q.empty()){
//             int el = q.front();
//             q.pop();
//             s.push(el);
//         }
        
//         while(!s.empty()){
//             int el = s.top();
//             s.pop();
//             q.push(el);
//         }
//         return q;
//     }
// };

// using recursion
class SolutionB
{
    public:
//   void insert(queue<int>& q,int element) {
// // base case
// if(q.empty()){
//     q.push(element);
//     return;
// }

// int top = q.front();
// q.pop();
// insert(q,element);
// q.push(top);
// }

queue<int> reverseQueue(queue<int> &q) {
   //base case 
   if(q.empty()){
       return q;
   }

   int front = q.front();
   q.pop();
   reverseQueue(q);
//    insert(q,front);
   q.push(front);
   return q;
}

};


int main()
{

 int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    SolutionB ob;
    queue<int> a=ob.reverseQueue(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }


return 0;
}