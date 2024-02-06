 #include<iostream>
 #include<stack>
 using namespace std;
 int main()
 {
    // initialize
 stack<string> s;
 s.push("pinchu");
 s.push("bhai");
 s.push("negi");
 
 // last pushed element will be the
 // top element
 cout<<"Top Element ->"<<s.top()<<endl;
 
 s.pop(); // <-- pop the top element
  
 cout<<"Top Element ->"<<s.top()<<endl;

 cout<<"size of stack->"<<s.size()<<endl;

 cout<<"empty->"<<s.empty()<<endl;
 
 return 0;
 }