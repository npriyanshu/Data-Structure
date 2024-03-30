#include<iostream>
#include<vector>
 #include<stack>
using namespace std;
 vector<int> nextSmallerElement(vector<int> &arr, int n)
{
  stack<int> s;
   s.push(-1);
   vector<int> ans(n);

   for(int i=n-1;i>=0; i--){
    int elm = arr[i];
     
    while(s.top() != -1 && arr[s.top()]>=elm){
        s.pop();
    }
    // ans is stack ka top
    ans[i] = s.top(); 
    s.push(i);
   }
   return ans;
}
 

 vector<int> prevSmallerElement(vector<int> &arr, int n)
{
  stack<int> s;
   s.push(-1);
   vector<int> ans(n);

   for(int i=0;i<n; i++){
    int elm = arr[i];
    
    while(s.top() != -1 && arr[s.top()]>=elm){
        s.pop();
    }
    // ans is stack ka top
    ans[i] = s.top(); 
    s.push(i);
   }
   return ans;
}




 int largestRectangle(vector < int > & heights) {
   int n = heights.size();

   vector<int> next(n);
   next = nextSmallerElement(heights,n);
 
   vector<int> prev(n);
   prev = prevSmallerElement(heights,n);

int area = INT_MIN;
for(int i = 0;i<n; i++){
  int length = heights[i];
  // if there is no next smaller index
  if(next[i]== -1){
    next[i] = n;
  }
  int breadth = next[i] - prev[i] -1;
  int newArea = length*breadth;
  area = max(area,newArea);
}

return area;

 }

int main()
{



return 0;
}