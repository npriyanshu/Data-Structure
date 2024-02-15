#include<iostream>
using namespace std;
int main()
{

    // double pointer is a type of pointer 
    // who stores the address of another pointer

    int i = 4;
    int *p = &i;
    int **ptr = &p;
    cout<<" address of ptr (&ptr) :"<<&ptr<<endl;
    cout<<" value at ptr (ptr) :"<<ptr<<endl;
    cout<<" value of address at ptr (*ptr) :"<<*ptr<<endl;
    cout<<"(**ptr) :"<<*ptr<<endl;
  
    cout<<" address of p (&p) :"<<&p<<endl;
    cout<<" value at p (p) :"<<p<<endl;
    cout<<" value of address at p (*p) :"<<*p<<endl;


// multi level pointer

int ***ptrr = &ptr;
cout<<ptrr;


return 0;
}