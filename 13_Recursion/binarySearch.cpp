#include<iostream>
using namespace std;
bool bSearch(int arr[],int key,int s,int e){
    // base case
    if(s>e) return false;
    int mid = s + (e-s)/2;
    // if the element is present at the middle
    if(arr[mid] == key){
        return  mid;
    }
    if(arr[mid]>key){
        return  bSearch(arr,key,s,mid-1);// recur for left subarray
    }
    else{
        return bSearch(arr,key,mid+1,e);// recur for right subarray
    }
   
}
int main()
{

int arr[] ={1,2,3,4,6,8,25}; 
cout<<bSearch(arr,6,0,7);
return 0;
}