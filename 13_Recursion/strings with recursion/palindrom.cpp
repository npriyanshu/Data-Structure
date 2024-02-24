#include<iostream>
#include<vector>
using namespace std;
bool isPalindrome(string s, int i ,int j){
    if(i > j) return true;
    if(s[i] != s[j]) return false;
   
   bool res =  isPalindrome(s, i+1, j-1);
   return res;

}
int main()
{
string s = "BookkooB";
string ans = isPalindrome(s,0,s.length()-1) ? "Yes it is a palindrome" : "No it is not a palindrome";
cout<< ans;

return 0;
}