#include<iostream>
using namespace std;

void swap(int arr[],int size){
    int temp = 0;
  for(int i =0; i<size;i+=2){
    temp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1] = temp;
 }
}
void swappedAlternate(int arr[],int size){
if(size%2==0){
   swap(arr,size);
}
else{
  swap(arr,size-1);
 }
}

void printArray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
 int arr [10]= {2,33,2,6,3,8,6,3,5,7};
 int odd [7]= {2,32,2,6,43,8,46,};


  swappedAlternate(arr,10);
  printArray(arr,10);
  cout<<endl;
  swappedAlternate(odd,7);
  printArray(odd,7);
    return 0;
}