#include<iostream>
using namespace std;
// int *arr == int arr[] here 
int getSum(int *arr, int n){
    int sum = 0;
    for (int i = 0; i<n; i++)
    {
       sum += arr[i];
    }
    
    return sum;
}


int main()
{

// create a dynamic arr size of n
// n is an user input
int n;
cin>> n;
int *arr = new int[n];
for(int i=0;i<n;i++ ){
    cin>>arr[i];
}
cout<<getSum(arr,n);
return 0;
}