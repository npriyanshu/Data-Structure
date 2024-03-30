#include<iostream>
#include<vector>
#include<stack>
#define MAX 1000
using namespace std;
 vector<int> nextSmallerElement(int *arr, int n)
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
 

 vector<int> prevSmallerElement(int *arr, int n)
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

    int largestRectangleArea(int *heights,int n) {
        //  int n = heights.size(); 

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

    int maxArea(int M[MAX][MAX], int n, int m) {
       
       // compute area for first row
       int area = largestRectangleArea(M[0],m);
       
       for(int i = 1;i<n; i++){
            for(int j = 0;j<m; j++){
           // row update: by adding previous row's value
           if(M[i][j] !=0){
               M[i][j] = M[i][j] + M[i-1][j];
           }
           else{
               M[i][j] = 0;
           }
           
            }
            // entire row is updated now
            int newArea = largestRectangleArea(M[i],m);
            area = max(area,newArea);
       }
       return area;
    }
int main()
{



return 0;
}