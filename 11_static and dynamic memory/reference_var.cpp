#include<iostream>
using namespace std;

// passing reference 
// also called pass by reference
void update(int& n){
    n++;
}
int main()
{
// reference variable in simple is 
// same memory with diff diff name(variables)

// how to create a ref variable
int i = 5;
int& j = i; //<-- reference variable

// WHY NEED ?
// we need these for pass by reference

cout<<j<<endl;
update(j);
cout<<j;


return 0;
}