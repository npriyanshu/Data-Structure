/* Problem statement
Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.

Example:

We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0 
based indexing so the subarray {5, 6} will be reversed and our 
output array will be {1, 2, 3, 4, 6, 5}. */


#include<iostream>
#include<vector>
using namespace std;
void reverseArray(vector<int> &arr , int m){ 

    //  	  for(int s = 0,e = m-1;s<=e;s++,e--){
    //   swap(arr[s],arr[e]);
    // }   

     for(int s = m+1,e = arr.size()-1;s<=e;s++,e--){
      swap(arr[s],arr[e]);
    } 
}
int main()
{
vector<int> v={1,2,4,2,5,7};
cout<<"before reversing "<<endl;
for (auto &&i : v)
{
    cout<<i<<" ";
}
cout<<endl;
reverseArray(v,2);
cout<<"after reversing "<<endl;
for (auto &&i : v)
{
    cout<<i<<" ";
}


return 0;
}