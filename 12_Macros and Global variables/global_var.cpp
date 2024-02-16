#include<iostream>
using namespace std;
int glob = 53;

// using global variable is
// a bad practice
// because anyone can modify it
// we should instead use reference variable

void  func1() {
    cout<<glob;
}
int main()
{

cout<<glob<<endl;
glob++;
func1(); // calling function with no arguments


return 0;
}