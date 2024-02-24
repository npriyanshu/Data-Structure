#include<iostream>
using namespace std;
int power(int x , int n){
    int ans = 1;
    if(n&1){
           for(int i = 0;i<(n/2);i++){
     ans  = ans * x;
        }
        return (ans * ans)* x; 
    }
    else{
        for(int i = 0;i<(n/2);i++){
     ans  = ans * x;
        }
        return ans * ans;
     
    }
}
int main()
{
cout<<power(3,4);

return 0;
}