#include<iostream>
using namespace std;
class Opl
{
public:
int a;
int b;

// for + operator 
void operator+ (Opl &obj){
    int val1 = this->a;
    int val2 = obj.a;
    cout<<" output "<< val1 + val2<<endl;
}

// for operator () bracket
void operator() (){
    int val1 = this->a;
    cout<<" main Bracket hu "<< val1 <<endl;
}

//  for minus
void operator- (Opl &obj){
    int val1 = this->a;
    int val2 = obj.a;
    cout<<val2<<"-"<< val1<<" ="<<val2-val1<<endl;
}


};

int main()
{

Opl obj1,obj2;

obj1.a = 3;
obj2.a = 4;

obj1+obj2;
obj1();

obj1-obj2;

return 0;
}