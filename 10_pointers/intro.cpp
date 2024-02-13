#include<iostream>
using namespace std;
int main()
{

// address of operator -> &
// &n -> address of n
int n = 0;

// initialize pointer
// type *pointer_name = address of variable :  double *p = &var;

int *ptr = &n;


// Note : pointer to int is created and pointing to some garbage value <<<--= BAD PRACTICE
// int *p; <----  BAD PRACTICE ,always intialize pointer to some address
// int *p =0; <-- we could do this instead here pointer is pointing to 0 or a null memory which don't exist
// so we'r gonna get a segmentation fault error when we try to access it;


cout<<++*ptr<<" at address :"<< ptr;


return 0;
}