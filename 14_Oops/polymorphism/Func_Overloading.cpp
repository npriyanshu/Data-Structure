#include<iostream>
using namespace std;

class A
{
public:
// function overloading
/* --- declring multiple function with same name but different parameters --- */

void sayHello(){
    cout<<"hello bhai"<<endl;
}

void sayHello(string name){
    cout<<"hello "<<name<<" bhai"<<endl;
}

};

int main()
{

A obj;
obj.sayHello("priyanshu");


return 0;
}