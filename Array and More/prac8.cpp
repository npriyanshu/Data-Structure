#include<iostream>
using namespace std;
int main(){
    int unique = 0;
  
    int arr[11] = {1,2,8,4,1,9,8,4,2,3,3};
    for(int i = 0;i<11;i++){
     unique = unique^arr[i];
    }
    cout<<"the unique no is :"<<unique;
    return 0;
}