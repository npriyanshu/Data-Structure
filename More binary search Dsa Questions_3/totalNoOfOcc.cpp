// to no of occurence
// formula => (last index - first index )+1

#include<iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> arr, int size, int key){

int s =0,e = size-1;
int mid = s+ (e-s)/2;
int ans =-1;

while(s<=e){
    if(arr[mid]==key){
        ans =mid;
        // to the left
        e = mid-1;
    }
    else if(arr[mid]<key){
        // to the right
     s = mid+1;
    }
    else if(arr[mid]>key){
e = mid -1;
    }
    mid = s+ (e-s)/2;
}
return ans;
}

int lastOcc(vector<int> arr, int size, int key){

int s =0,e = size-1;
int mid = s+ (e-s)/2;
int ans =-1;

while(s<=e){
    if(arr[mid]==key){
        ans =mid;
        // to the right
        s = mid+1;
    }
    else if(arr[mid]<key){
        // to the right
     s = mid+1;
    }
    else if(arr[mid]>key){
e = mid -1;
    }
    mid = s+ (e-s)/2;
}
return ans;
}

int main()
{
    int key;
    vector<int> arr={1,1,2,3,3,3,3,3,3,3,4,4,5,6,6};
    cout<<"enter the value of key :";
    cin>>key;
cout<<"total occurence of "<<key<< " is :"<<(lastOcc(arr,arr.size(),key)-firstOcc(arr,arr.size(),key))+1;

return 0;
} 