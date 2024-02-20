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
int main()
{
int arr[] = {1,2,4,5,6,8,2,4,6};
int ans=0;
isSum(arr,9,ans);
cout<<ans;




return 0;
}