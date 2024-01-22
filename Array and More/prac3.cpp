#include<iostream>
using namespace std;
void fibbo(int n){
int newNUm; 
int last =0,prev =1,newN;

   cout<<last<<endl;
   if(n==0 || n==1){
    return;
   }
   cout<<prev<<endl;
   if(n==2){
    return;
   }
for(int i =0;i<=n-3;i++){
   newN = last + prev;
   cout<<newN<<endl;
   last = prev;
   prev = newN;
}
}
int main(){
    int num;
    cout<<"enter the no :"<<endl;
    cin>>num;
    fibbo(num);
    return 0;
}