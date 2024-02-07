#include<iostream>
#include<vector>
// for binary search include this lib
#include<algorithm>
using namespace std;
int main()
{
vector<int> v;

v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(5);

int key = 5;
// apply binary search

// printing like this will give us boolean value
cout<<"finding key :"<<key<<" "<< binary_search(v.begin(),v.end(),key)<<endl;

// to get the lowerbound or index

cout<<"finding lowerbound :"<<key<<" "<< lower_bound(v.begin(),v.end(),key)-v.begin()<<endl;

// upper bound

cout<<"finding upperbound :"<<key<<" "<< upper_bound(v.begin(),v.end(),key)-v.begin()<<endl;



// other methods
int a = 3;
int b = 5;
cout<<" max :"<<max(a,b);
cout<<" min :"<<min(a,b)<<endl;
cout<<"before swap"<<endl;
cout<<" a :"<<a;
cout<<" b :"<<b;
swap(a,b);
cout<<endl<<"after swap"<<endl;
cout<<" a :"<<a;
cout<<" b :"<<b;

cout<<endl;
// reverse a string
string abcd = "abcd";
reverse(abcd.begin(),abcd.end());
cout<<"reversed :"<<abcd<<endl;

// rotating vector array
// rotate(begin,how much element,end);

rotate(v.begin(),v.begin()+1,v.end());

for (auto &&i : v)
{
    cout<<i<<" ";
}
cout<<endl;

// sorting vector
// this sort is based of intro sort 
// intro sort is combination of sorts - quick sort,insertion sort,heap sort.
sort(v.begin(),v.end());
cout<<"after sorting"<<endl;
for (auto &&i : v)
{
    cout<<i<<" ";
}
cout<<endl;
  
return 0;
}