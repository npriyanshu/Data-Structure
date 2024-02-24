#include<iostream>
using namespace std;
int power(int x,int n){
    if(n==0) return 1;
    if(n==1) return x;

   if(n%2!=0){
    int p =  power(x,n/2);
    return (p * p) * x;
   } 
   else{
    int p = power(x,n/2);
    return p * p;
   }
}
int main()
{

cout << "Enter the base number: ";
int x; cin >> x;
cout << "\nEnter the exponent: ";
int n; cin >> n;
if(n < 0 ) { cout << "Sorry! Negative powers are not allowed.";}
else {
     cout << "\nThe result is : " << power(x,n);
     }    


return 0;
}