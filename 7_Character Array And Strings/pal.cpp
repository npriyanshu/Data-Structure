#include<iostream>
#include<vector>
using namespace std;

void toLowerCase(string &s)
{	
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch <= 'Z' && ch >= 'A')
        {
            ch = ch - ('A' - 'a');
            s[i] = ch;
        }
    }
}

string reverseString(string s)
{
    for (int i = 0, j = s.length() - 1; i < j; ++i, --j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    
    return s;
}

bool checkPalindrome(string s)
{	
    toLowerCase(s);
    
    string reversedS = reverseString(s);

    int n = s.length();
    int i = 0;
    int j = 0;

    while (i < n && j < n)
    {
        if (isalnum(s[i]) == 0)
        {
            ++i;
        }
        else if (isalnum(reversedS[j]) == 0)
        {
            ++j;
        }
        else if (s[i] == reversedS[j])
        {
            ++i; 
            ++j;
        }
        else
        {
            return false;
        }
    }
    
    return true;
}
int main()
{



return 0;
}