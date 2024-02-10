// maximum occuring character in a string
#include<iostream>
#include<vector>
using namespace std;

char getMaxOccChar(string s){
    int arr[26] = {0};
    for(int i =0; i<s.length();i++){
        char ch = s[i];
        int n =0;
        // lower case
        if(ch>='a' && ch<='z'){
             n = ch - 'a';
        }
        // upper case
        else {
             n = ch - 'A';
        }
            arr[n]++;
    }

    // get max occuring no
    int maxi = -1,ans = -1;
    for(int i =0;i<26;i++){
  if(maxi<arr[i]){
    ans = i;
    maxi = arr[i];
  }
    }

    char finalAns = 'a'+ ans;
    return finalAns;

}
int main()
{
string s;
cin>>s;
cout<<getMaxOccChar(s);


return 0;
}