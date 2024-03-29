#include <iostream>
#include <stack>
using namespace std;

bool matches(char top, char ch){
if( ch == ')' && top == '(') return true;
else if (ch == ']' && top == '[') return true;
else if (ch == '}' && top == '{') return true;

return false; 
}

bool checkParanthesis(string expression)
{
    stack<char> stk;
    for (int i = 0; i < expression.length(); i++)
    {
        char ch = expression[i];

        // if opening bracket ,stack push
        // if close bracket , stacktop check and pop

        if (ch == '(' || ch == '{' | ch == '[')
        {
            stk.push(ch);
        }
        else
        {
            // for closing bracket
            if (!stk.empty())
            {
                char top = stk.top();
                if (matches(top, ch))
                {
                    stk.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if(stk.empty()) {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    cout<<checkParanthesis("[[]{}()]")<<endl; // true

    return 0;
}