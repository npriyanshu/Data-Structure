#include<iostream>
using namespace std;
int main(){
    int n;
    int prod = 1;
    int sum = 0;
    cout<<"enter the value of n :";
    cin>>n;
  for(int i=0;n>0;i++){
      int digit = n%10;
      prod = prod * digit;
      sum = sum + digit;
      n = n/10;
  }
  cout<<"product :"<<prod << endl;
  cout<<"sum :"<<sum << endl;

}