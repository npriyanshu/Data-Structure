#include<iostream>
#include<stack>
#include<vector>
using namespace std;
 vector<int> nextSmallerElement(vector<int> &arr, int n)
{
  stack<int> s;
   s.push(-1);
   vector<int> ans(n);

   for(int i=n-1;i>=0; i--){
    int elm = arr[i];
    
    while(s.top()>=elm){
        s.pop();
    }
    // ans is stack ka top
    ans[i] = s.top(); 
    s.push(elm);
   }
   return ans;
}
 

int main()
{



return 0;
}