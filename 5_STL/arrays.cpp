#include<iostream>
// to use std array first
// import array library
#include<array>
using namespace std;
int main()
{
// basic arry
int basic[3] = {0,1,2};

// stl array syntax 
array<int,4> a = {1,2,3,5};

int size = a.size();
cout<<size<<endl;

// accessing elemetns
// normal way 
cout<<a[1]<<endl;

// using methods
cout<<a.at(1)<<endl;

cout<< "Empty or not :"<<a.empty()<<endl;

cout<< "first element :"<<a.front()<<endl;
cout<< "first element :"<<a.back()<<endl;

return 0;
}