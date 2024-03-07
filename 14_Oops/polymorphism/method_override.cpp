#include<iostream>
using namespace std;

// example of method overriding
// we make our own implementation in
// already implemented methods
class A{
    public:
    void show(){
        cout<<" we are in the class A"<<endl;
    }
};
class B:public A{
    public:
    void show(){
        cout<<" we are in the class B"<<endl;
    }
};
class C:public A{
    public:
    void show(){
        cout<<" we are in the class C"<<endl;
    }
};
int main()
{
A a;
B b;
C c;

a.show();
b.show();
c.show();


return 0;
}