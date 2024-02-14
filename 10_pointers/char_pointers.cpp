#include<iostream>
using namespace std;
int main()
{
 char ch[7] = "pinchu";

 char *c = &ch[0];
 cout<<c<<endl;

 // we can do this
 cout<<*(c+4);


return 0;
}