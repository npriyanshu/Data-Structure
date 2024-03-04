#include<iostream>
// we can also import or include class from different file
#include "Hero.cpp";
using namespace std;

// creating a class

class basic
{
private:
 int arr[100];
 int val;

 public:
 // getter setter
 int  getVal() { return val; }
 int * getArr() { return arr; }
 void setVal(int v) { val  = v; }
};


int main()
{

// creating object of the class
// static allocation
basic obj;

obj.setVal(50); // assigning value to 'val' member variable using dot operator

cout<<"size :"<<sizeof(obj)<<endl;
cout<<"value : "<<obj.getVal()<<endl;

int * arr  = obj.getArr(); // getting address of 'arr'
*arr=60; // changing the value
cout<<*arr<<endl;


// dynamic allocation

basic *b = new basic;
cout <<"size of b object :" <<sizeof(*b) << endl;

// access data memebers in dynamic allocation

// using dot and value at operator
(*b).setVal(80);
cout << "Value of 'val' through dot operator : " << (*b).getVal() << endl ;


// without  using dot operator
b->setVal(70);
cout<<"Value : "<<b->getVal()<<endl;

delete b; // deleting dynamically allocated memory


// included class object
Hero h;
h.health = 53;
cout<<"hero's health is "<<h.health<<endl;


return 0;
}