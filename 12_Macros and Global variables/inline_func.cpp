#include<iostream>
using namespace std;

// creating inline funcion

inline int getMax(int &a,int &b){
    return (a>b) ? a : b;
}



int main()
{
// tertiary operator
// it is just simple if else condition check

int a = 1, b = 2;

int ans = 0;

// // normal if else
// if(a>b){
//     ans = a;
// }
// else{
//     ans = b;
// }

// now tertiary operator
// ans = condition ? if(true) : else(false); 
//  ans = (a>b) ? a : b;

 ans = getMax(a,b);

 cout<<ans;




return 0;
}