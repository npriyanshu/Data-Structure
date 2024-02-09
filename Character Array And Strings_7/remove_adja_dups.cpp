#include<iostream>
#include<stack>
using namespace std;
string removeDuplicates(string s) {
    stack<char> charStack;
    for (char c : s) {
        if (!charStack.empty() && c == charStack.top()) {
            charStack.pop();
        } else {
            charStack.push(c);
        }
    }
    
    string result = "";
    while (!charStack.empty()) {
        result = charStack.top() + result;
        charStack.pop();
    }
    
    return result;
}
int main()
{

string s = "abbaca";
cout<<removeDuplicates(s);


return 0;
}