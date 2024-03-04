// creating our own copy constructor
#include <iostream>
using namespace std;
class ctr
{
    int health;
    int lvl;
    // creating constructor
    // parameterized constructor

public:
    ctr(int health,int lvl)
    {
        // we use this keyword to access objects property here
        this->health = health;
        this->lvl = lvl;
    }

// our own copy constructor
// always use pass by reference
ctr(ctr& t){
this->health=t.health;
this->lvl=t.lvl;
cout<<"Copy Constructor Called!"<<endl;
}

void print(){
    cout<<"health :"<<this->health<<" Level:"<<this->lvl<<endl;
}



};

int main()
{

    ctr c(30,3);
    
   // calling copy constructor 
   ctr cpy(c);
   cpy.print();


    return 0;
}