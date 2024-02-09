#include<iostream>
using namespace std;
int main()
{
// initialize a string;
string str = "priyanshu";

// get length of string
cout<<str.length()<<endl;

// push back 
str.push_back('c'); // single quote char
// pop back
// str.pop_back();

cout<<str.length()<<endl;
cout<<str<<endl;

return 0;
}