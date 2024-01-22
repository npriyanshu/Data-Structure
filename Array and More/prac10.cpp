#include<iostream>
using namespace std;
bool elemInArr(int arr[],int size,int elem){
    if(size ==0){
        return false;
    }
for(int i = 0; i<size;i++){
if(elem == arr[i]){
    return true;
}
}
return false;
}
int main(){
    int arr[9] = {1,2,3,5,2,5,9,3,9};
    int duplicates[10] ={0};
    int inc =0;



    for(int i=0;i<9;i++){
     for(int j=0;j<9;j++){
      if(i!=j){
       if(arr[i]==arr[j] && elemInArr(duplicates,inc,arr[i])== false){
        duplicates[inc] = arr[i];
        inc++;
       }
      }
    }
    }
    for(int i =0;i<inc;i++){
        cout<<duplicates[i]<<endl;
    }
    return 0;
}