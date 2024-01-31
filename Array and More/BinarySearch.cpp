#include<iostream>
using namespace std;
int main()
{
int key,start=0,mid,end=5,found=0;
int arr[6] ={11,25,32,42,56,62};
cout<<"Enter the value of key";
cin>>key;

//   mid = (start + end)/2;
while (start<=end)
{
  mid = (start + end)/2;

if(arr[mid]==key){
    cout<<"element has found at :"<<mid<<" location";
break;
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

