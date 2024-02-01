// Find first and last  occurence of an element in an array.

#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){

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

int LastOcc(int arr[], int size, int key){

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
int arr[9] = {1,2,3,3,3,4,4,5,5} ;

cout<<"First occurence of 3 is :"<<firstOcc(arr,9,3);
cout<<"Last occurence of 3 is :"<<LastOcc(arr,9,3);
return 0;
}