#include<iostream>
using namespace std;
int CalcAp(int n){
    return 3*n+7;
}
int main(){
    int n;
    cin>>n;

   cout<<CalcAp(n);
    return 0;
}