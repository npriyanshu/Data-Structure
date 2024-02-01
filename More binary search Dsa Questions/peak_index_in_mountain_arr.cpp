#include<iostream>
#include<vector>
using namespace std;
int findPeak(vector<int> arr,int size){
int s=0,e=size-1;
int mid = s + (e-s)/2;
while (s<e){


  if(arr[mid]<arr[mid+1]){
s = mid +1;
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
vector<int> arr = {1,2,3,4,5,6,7,5,1};

cout<<"the peak element is :"<<findPeak(arr,arr.size());
return 0;
}