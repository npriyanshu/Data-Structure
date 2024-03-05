#include<iostream>
using namespace std;

class A{

protected:
int a;
int b;

public:
int getA(){
    return this->a;
}
int getB(){
    return this->b;
}

};


class B: public A
{
public:

void setA(int val){
    this->a = val;
}

void setB(int val){
    this->b = val;
}
 
};

int main()
{

B b;

cout<<" a :"<<b.getA()<<" b :"<<b.getB()<<endl;

b.setA(40);
b.setB(60);

cout<<" a :"<<b.getA()<<" b :"<<b.getB()<<endl;


return 0;
}