#include<iostream>
using namespace std;

// fibonacci with recursion
     // recursive relation
     // f(n) = f(n-1) + f(n-2)
int fib(int n){

    // base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

     return fib(n-1) + fib(n-2);
}
int main()
{

cout<<fib(8);

return 0;
}