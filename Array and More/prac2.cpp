#include<iostream>
using namespace std;
int CalcSetBits(int a,int b){
 int count = 0;
 while(a!=0){
    if(a & 1){
      count++;
    }   
a = a>>1;
 }
 while(b!=0){
    if(b & 1){
      count++;
    }
b = b>>1;
 }
 return count;
}
int main(){
    int n1=3,n2=5;
    cout<<CalcSetBits(n1,n2);
    return 0;
}