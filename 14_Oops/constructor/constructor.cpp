#include <iostream>
using namespace std;
class ctr
{
public:
    int health;
    int lvl;
    // creating constructor
    // parameterized constructor
    ctr(int health)
    {
        // we use this keyword to access objects property here
        this->health = health;
        cout << "this->" << this << endl;
    }


    // we also make multiple parameterized constructor
    ctr(int health,int lvl){
        this->lvl = lvl;
        cout<<health<<" and "<<lvl<<endl;
    }
};

int main()
{

    // calling parameterized constructor or creating object of the class
    ctr c(30);
    // to show this keyword is pointing to the address of object we can do this
    cout << "address of ctr's instance c :" << &c << endl;

    cout << c.health << endl;


    // calling the second constructor with dynamic allocation
    ctr *c2 = new ctr(100,4);
    cout<<"level with arrow :"<<c2->lvl<<endl;
    cout<<"level with . op :"<<(*c2).lvl<<endl;


    // copy constructor

    // dynamic
    ctr *c3=c2;
//   ctr c3(*c2); // <-- making a static constructor from dynamic one



    // cout<<c3.lvl<<endl;
    cout<<c3->lvl<<endl;

    // static
    ctr c4(c);


    delete c2;// deleting  memory allocated by 'new' operator so that it
    delete c3;
    



    return 0;
}