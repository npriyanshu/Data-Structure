#include<iostream>
using namespace std;

void reversedArray(int arr[],int size){
    int temp = 0;
 for(int inc =0,dec = size-1; inc<=dec;inc++,dec--){
    temp = arr[inc];
    arr[inc] = arr[dec];
    arr[dec] = temp;
 }
}

void printArray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
  int arr [10]= {2,33,2,6,3,3,6,3,5,7};
  int size = 10;

  reversedArray(arr,size);
  printArray(arr,size);
  
    return 0;
}