// ********** reverse a string using stack *****************
#include<iostream>
#include<stack>
using namespace std;

string rev(string s){
stack<char> st;
string ans = "";
for (int i = 0; i <s.length(); i++)
{
  st.push(s[i]);
}

while(!st.empty())
{
  ans+=st.top();
  st.pop();
}
return ans;
}

int main()
{
    cout<<rev("pinchu")<<endl;



return 0;
}