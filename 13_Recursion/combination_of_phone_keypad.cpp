#include<iostream>
#include<vector>
using namespace std;

void solve(string digits,string output,int ind,vector<string> &ans, string mapping[]){
// base case
if(ind>=digits.length()){
    ans.push_back(output);
    return;
}

int number = digits[ind] - '0';
string value = mapping[number];
for(int i=0;i<value.length();i++){
    output.push_back(value[i]);
    solve(digits,output,ind+1,ans,mapping);
    output.pop_back();
}


}

vector<string> letterCombinations(string digits){
    vector<string> ans;
    if(digits.length() == 0){
return ans;
    }
    string output = "";
    int ind = 0;
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digits,output,ind,ans,mapping);
    return ans;
}

int main()
{

string s="23";
vector<string> ans = letterCombinations(s);
for (auto &&i : ans)
{
    cout<<i<<endl;
}



return 0;
}