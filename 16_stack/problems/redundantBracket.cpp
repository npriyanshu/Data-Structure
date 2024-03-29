#include<iostream>
#include<stack>
using namespace std;
#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
  stack<char> stk;

  for(int i =0;i<s.length();i++){
      char ch = s[i];

      if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/' ||
          ch == '%') {
        stk.push(ch);
      }
      else{
        // ch or closing or lwoerczse letter
        if (ch == ')') {
bool isRedundant = true;
          while(stk.top() != '('){
       char top = stk.top();
       if (top == '+' || top == '-' || top == '*' || top == '/' || top == '%'){
      isRedundant = false;
      }
        stk.pop();
  }

   if (isRedundant == true) 
   return true;
   stk.pop();

        }
      }

  }

  return false;


}
int main()
{



return 0;
}