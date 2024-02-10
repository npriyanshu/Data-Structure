#include<iostream>
#include<list>
using namespace std;
int main()
{
    // implementation of list is 
    // based on doubly linked list


// initalization
// list<type> list_Name(no_of_elements,all_elements_initial_value);


list<int> l;

l.push_back(1);
l.push_front(2);

l.erase(l.begin());

for(int i:l){
    cout<<i<<" ";
}
cout<<endl;
cout<<" size of list :"<<l.size();

cout<<endl;
l.push_back(19);
l.push_front(12);
l.push_back(11);
l.push_front(42);
// copy into new list 
list<int> n(l);
for (auto &&i : n)
{
    cout<<i<<" ";
}

cout<<endl;


return 0;
}