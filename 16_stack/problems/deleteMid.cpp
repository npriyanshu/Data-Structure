#include<iostream>
#include<stack>
using namespace std;

// delete middle using loops  and stacks.
void deleteMid(stack<int> &st){
// find mid 
// int mid = (st.size() + 1)/2;
int mid = st.size()/2;
cout<<"mid "<<mid<<endl;
stack<int> temp;
int count = 0;
while(count <mid)
{
    temp.push(st.top());
    st.pop();
    count++;
}
// poping mid element
st.pop();

while(!temp.empty()){
    st.push(temp.top());
    temp.pop();
}

}


// ****** Delete Mid Recursively **********

void solve(stack<int>& st,int count, int size) {

// base case 
if(count == size/2){
    st.pop();
    return;
}

// recursive call
int top  = st.top();
st.pop();
solve(st, count+1, size);

st.push(top); // push back the removed element in stack


}

void deleteMiddle(stack<int>& inputStack, int N) {
int count =0;
solve(inputStack,count,N);
}




int main()
{
    stack<int> st;
    st.push(83);
    st.push(74);
    st.push(67);
    st.push(49);
    st.push(94);
    st.push(8);
    st.push(11);
    st.push(1);
    // st.push(5);
cout<<"before deleting mid "<<endl;
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}
cout<<endl;

      st.push(83);
    st.push(74);
    st.push(67);
    st.push(49);
    st.push(94);
    st.push(8);
    st.push(11);
    st.push(1);
    // st.push(5);
    

deleteMid(st);

cout<<"after deleting mid "<<endl;
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}
cout<<endl;

return 0;
}


