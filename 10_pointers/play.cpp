#include<iostream>
using namespace std;
int main()
{
int num = 10;
int *p = &num;
int **q = &p;

**q+=200;

// copy a pointer
int *s = *q;
num++;
*s+=34;
cout<<num;



return 0;
}