// find a pivot in an array
// could be a sorted and rotated array
// sorted : {1,2,3,7,9} --> [7,9,1,2,3]: rotated
// what is pivot?
// if we represent all the values of array in
// a graph then pivot could be lowest of highest value

// question is how can we solve this with B.S.

#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int> arr,int size){
int s=0,e=size-1;
int mid = s +(e-s)/2;
while(s<e){
    
if(arr[mid]>=arr[0]){
s = mid+1;
}
else{
e = mid;
}
mid = s + (e-s)/2;
}
return s;
}

int main()
{
vector<int> arr ={4,5,6,7,9,1,2,3,4};
cout<<"the pivot is at index :"<<findPivot(arr,arr.size())<<"\nthe value at index is :"<<arr[findPivot(arr,arr.size())];

return 0;
}