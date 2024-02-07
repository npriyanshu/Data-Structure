#include<iostream>
using namespace std;
int main(){
    int n = 2;
    while(1){
   switch (n)
   {
   case 2:
    cout<<"it is two"<<endl;
    exit(1);
    continue;
   
   default: cout<<"it is not two"<<endl;
    break;
   }
    }
    cout<<"it is nothing";
    return 0;
}