#include<iostream>
#include<set>
using namespace std;
int main()
{
// set store only unique values in it
// cannot modify the element in it
// elments return in sorted  
// unordered set does not return elements 
// in sorted way

set<int> s;
s.insert(5);
s.insert(10);
s.insert(53);
s.insert(5);
s.insert(10);

for (auto &&i : s)
{
  cout<<i<<endl;  
}

// // we can delete elements in it
// s.erase(s.begin());

set<int>::iterator it = s.begin();

// we can also do this
s.erase(it);
cout<<" after erase "<<endl;
for (auto &&i : s)
{
  cout<<i<<endl;  
}

// count method check if element is present in the set or not

cout<<" it is present -->"<<s.count(10);


// find method returns the iterator of the element if present in the set

set<int>::iterator itr = s.find(10);

cout<<" value at itr-->"<<*itr<<endl;

return 0;
}