#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key){
    int start=0,mid,end=5;

    while (start<=end)
{
  mid = (start + end)/2;

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
return 0;
}
int main()
{
int key;
int arr[6] ={11,25,32,42,56,62};
cout<<"Enter the value of key";
cin>>key;

int loc = BinarySearch(arr,6,key);
if(loc != 0){
    cout<<"element has found at :"<<loc<<" location";
}
else {
cout<<"element is not in the array";
}
    return 0;
}


