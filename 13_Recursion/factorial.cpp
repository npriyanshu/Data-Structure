#include<iostream>
using namespace std;
int factorial(int n){
    // base(end) condition or base case
    if(n==0){
        return 1;
    }
    // recursive relation => f(n) = n * f(n-1)
    return n * factorial(n-1);
}
int main()
{

    int n;
    cout<<"enter the value of n :";
    cin>>n;
cout<<factorial(n);


return 0;
}