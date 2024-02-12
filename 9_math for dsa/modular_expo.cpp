// using fast exponentiation technique
//  modulo operator

#include<iostream>
#include<vector>
using namespace std;
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
 int res = 1;
 while(n>0){
	 if(n&1){

// 1LL is 1 long long we are basically type-casting 
// them to long long
		 res = (1LL * (res) * (x)%m)%m;
	 }
	 x = (1LL * (x)%m*(x)%m)%m;
	 // right shift by 1 == divided by 2;
	 n = n>>1;
 } 
 return res; 

	 
}
int main()
{



return 0;
}