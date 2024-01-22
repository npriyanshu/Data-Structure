#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    int i = 0;
    int digit = 0;
    int Dnum = 0;
    cout<<"Enter a binary number : ";
    cin>>n;
    while(n!=0){
    digit = n%10;
    Dnum =  digit * pow(2,i) + Dnum;
    n = n/10;
    i++;
    }
    cout<<Dnum;
    return 0;
}