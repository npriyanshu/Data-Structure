#include<iostream>
#include<stack>
#include<vector>
using namespace std;
    bool knows(vector<vector<int>> &M,int a,int b,int n){
      if(M[a][b]==1)
         {
              return true;
         }
      else
      {
          return false;
      }
       
    }
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        // step1: push all element in stack
        for(int i=0;i<n;i++){
           s.push(i); 
        }
        
        //step2: 
        while(s.size()>1){
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(knows(M,a,b,n)) {
                s.push(b);
            }
            else{
                s.push(a);
            }
            
        }
        int candidate = s.top();
        // step3: signle element in stack is potential celebrity
        // so verify it
        
        int zeroCount = 0;
        
        for(int i=0;i<n;i++){
            if(M[candidate][i] == 0){
                zeroCount++;
            }
    }
            
            // all zeroes
            if(zeroCount != n){
              return -1;
            }

// column check

int oneCount = 0;

   for(int i=0;i<n;i++){
            if(M[i][candidate]==1){
                oneCount++;
            }
          
        }
    if(oneCount != n-1){
               return -1;
      }
     
     return candidate;
      
    }
int main()
{



return 0;
}