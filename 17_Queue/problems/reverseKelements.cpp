#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        
        stack<int> s;
        for(int i = 0; i<k;i++){
           int f = q.front();
           q.pop();
           s.push(f);
        }
        
        while(!s.empty()){
            int top = s.top();
            s.pop();
            q.push(top);
        }
        
        int t = q.size() - k;
        while(t--){
            int f = q.front();
            q.pop();
            q.push(f);
        }
        
        return q;
        
    }
};

 
int main()
{



return 0;
}