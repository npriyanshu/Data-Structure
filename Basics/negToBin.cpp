#include<iostream>
#include<math.h>
using namespace std;
int main(){
      int32_t n;
    int bit = 0;
    int result = 0;
    int i = 0;
    num:
    cout<<"Enter a negative number: ";
    cin>>n;

    if(n>=0){
        cout<<" InValid Input Please Enter a negative number"<<endl;
        goto num;
    }
    n = n*(-1);
    n = ~n+1;
    while(n!=0){
            bit = n&1;
            result = bit * pow(10 , i) + result;
            n = n>>1;
            i++;

    }
    cout<<"The binary of the given number is: "<<result<<endl;
    return 0;
}