#include<iostream>
#include<map>
using namespace std;
int main()
{
// map stores data in key-value pair

// keys must be unique

// initialize map
// maps implementation is based on balance tree

// in this map searching complexity is o(logn)
// but in unordered map searching complexity is o(1) because unordered maps implementation is based on hash table
map<int,string> m;

// storing keys and values in map
m[1] = "priyanshu";
m[12] = "singh";
m[3] = "negi";

// another method for inserting data;
// m.insert({key,"value"});
m.insert({14,"G"});

cout<<"before erase "<<endl;
// print keys and values of map 
// it prints keys in sequence manner 
// eg: 1,3,12
for (auto &&i : m)
{
    // i.first gives the
    // key and i.second gives values 
 cout<<i.first<<":"<<i.second<<endl;   
}

// check if a key exist or not

cout<<" finding 12 :"<<m.count(12)<<endl;

// erase data
m.erase(12);

cout<<"after erase "<<endl;

for (auto &&i : m)
{ 
 cout<<i.first<<":"<<i.second<<endl;   
}

// find returns iterator of that particular element
cout<<" iterator "<<endl;
auto it = m.find(3);
for(auto i =it;i!=m.end();i++){
    cout<<(*it).second<<endl;
}

return 0;
}