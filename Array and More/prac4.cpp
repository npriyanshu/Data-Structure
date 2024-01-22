#include<iostream>
using namespace std;

int sumOfArray(int arr[],int size){
int sum=0;
for(int i =0;i<size;i++){
    sum +=arr[i];
}
return sum;
}
int main(){
 int size = 5;
 int arr[100] = {1,3,5,2,3};
 cout<<sumOfArray(arr,size);

    return 0;
}