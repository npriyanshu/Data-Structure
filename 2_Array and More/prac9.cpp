#include<iostream>
using namespace std;
int main(){
    int duplicate = 0;

    int arr[6] = {1,2,3,4,5,3};
    for(int i = 0;i<6;i++){
   duplicate = duplicate^arr[i];
     }

     for(int i = 0;i<6;i++){
   duplicate = duplicate^i;
     }


    cout<<"the duplicate no is :"<<duplicate;
    return 0;
    }
