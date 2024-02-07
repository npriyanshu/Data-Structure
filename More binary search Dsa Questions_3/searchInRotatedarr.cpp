// search in sorted rotated array
// // sorted : {1,2,3,7,9} --> [7,9,1,2,3]: rotated

#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> arr,int size,int key,int s=0){
    int start=s,mid,end=size-1;

    while (start<=end)
{
  mid = start + (end - start)/2;

if(arr[mid]==key){
    return mid;
}
if(arr[mid]>key){
    end = mid-1;
}
if(arr[mid]<key){
    start = mid +1;
}
}
return -1;
}

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
int key;
cout<<"enter the key :";
cin>>key;
int size = arr.size();
int pivot = findPivot(arr,size);
if(arr[pivot]<=key && key<=arr[size-1]){
int ind = BinarySearch(arr,size,key,pivot);
cout<< "key is at index :"<<ind;
}
else{
    int ind = BinarySearch(arr,pivot,key);
     cout<< "key is at index :"<<ind;
}


return 0;
}