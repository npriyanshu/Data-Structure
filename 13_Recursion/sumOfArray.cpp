#include<iostream>
using namespace std;
void isSum (int arr[],int size,int &ans){
    if(size == 0){
        return;
    }
    if(size == 1){
        ans += arr[0];
        return;
    }
      
      ans += arr[0]; 
     isSum(arr+1,size-1,ans);
    
}
// without ref variable
int Sum (int arr[],int size){
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
      
     int ans = arr[0] + Sum(arr+1,size-1); 
     return ans;
    
}
int main()
{
int arr[] = {1,2,4,5,6,8,2,4,6};
int ans=0;
isSum(arr,9,ans);
cout<<ans<<endl;
cout<<Sum(arr,9);




return 0;
}