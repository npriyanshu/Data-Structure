#include<iostream>
// import vector library
#include<vector>
using namespace std;
int main()
{
// vector is a dynamic array

// create a vector

// vector<int> vector_name(size,no); <-- initialize vector with
// a size and no 

vector<int> v2(10,2);



// vector<type> vec_name;
vector<int> v;
// capacity shows the total space assigned for 
// the elements
cout<< "Capacity->"<<v.capacity()<<endl;
   
// to push the elements at the end
// of vector array
v.push_back(1);
cout<< "Capacity->"<<v.capacity()<<endl;

v.push_back(2);
cout<< "Capacity->"<<v.capacity()<<endl;

v.push_back(23);
cout<< "Capacity->"<<v.capacity()<<endl;

// size shows the number of elements 
// in the vector
cout<< "Size->"<<v.size()<<endl;

// front and back elements 
cout<< "Front->"<<v.front()<<endl;
cout<< "back->"<<v.back()<<endl;

// pop the last elment of vector
v.pop_back();
for(int i:v){
    cout<<i<<" ";
}
cout<<endl;
// to clear vector clear method is used
// when clear is used its size changes but 
// capacity remains the same means only 
// elements gets removed 

cout<<"Capacity before clearing :"<<v.capacity()<<endl;
cout<<"size before clearing :"<<v.size()<<endl;
v.clear();
cout<<"Capacity after clearing :"<<v.capacity()<<endl;
cout<<"size after clearing :"<<v.size()<<endl;

cout<<"print v2 "<<endl;
for (auto &&i : v2)
{
    cout<<i<<" ";
}
cout<<endl;

// copy v2 in diffrent vector 
cout<<"printing last vector"<<endl;
vector<int> last(v2);

for (auto &&i : last)
{
      cout<<i<<" ";

}


return 0;
}