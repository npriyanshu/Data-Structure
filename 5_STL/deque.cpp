#include<iostream>
#include<deque>
using namespace std;
int main()
{

// create deque - doubly ended queue
deque<int> d;

d.push_back(1);
d.push_front(2);
d.push_back(21);
d.push_front(22);
d.push_back(16);
d.push_front(28);

cout<<"first"<<endl;
for(int i:d){
    cout<<i<<" ";
}

d.pop_back();
d.pop_front();

cout<<endl;
cout<<"second "<<endl;
for(int i:d){
    cout<<i<<" ";
}

cout<<endl;
cout<<"Print First Indiex Element ->"<<d.at(0)<<endl;

cout<<"Empty of Not ->"<<d.empty()<<endl;

// to delete  a range or whole erase method is used

// d.erase(d.begin(),d.begin()+1)
d.erase(d.begin(),d.begin()+1);
for(int i:d){
    cout<<i<<" ";
}
return 0;
}