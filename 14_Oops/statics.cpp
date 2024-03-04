// how to create static data members

#include<iostream>
using namespace std;

class statics
{

public:
// creating a static data member
static int x;


// static function 
static int random(){

    return x + 50;
}

};

// initializing the static data member
// we do it out of the class

// type clsName :: memberName = value;
int statics :: x = 40;


int main()
{

// we can use it without creating any object of the class 
cout<<statics::x<<endl;
cout<<statics::random()<<endl;



return 0;
}