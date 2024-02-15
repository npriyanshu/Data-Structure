#include<iostream>
using namespace std;
void update(int **p){
    // p = p+1;
    // *p = *p+ 1;
    **p = **p +1;
}
int main()
{

int i = 53;
int *p = &i;
int **ptr = &p;
 
cout<<**ptr<<endl;
cout<<p<<endl;
cout<<"afer"<<endl;
update(ptr);
cout<<**ptr<<endl;
cout<<p<<endl;


return 0;
}