#include<iostream>
#include<vector>
using namespace std;

void solve(string str,int ind,vector<string> &ans){
// base case
if(ind>=str.length()){
    ans.push_back(str);
    return;
}

for(int i=ind;i<str.length();i++){
swap(str[i],str[ind]); // swap
    solve(str,ind+1,ans);
swap(str[i],str[ind]); // backtracking
    printf( " str[i] :%c\t  str[ind]:%c \n", str[i], str[ind] ); 
   
}


}

vector<string> permutations(string str){
    vector<string> ans;
    if(str.length() == 0){
    return ans;
    }
    int ind = 0;
    solve(str,ind,ans);
    return ans;
}

int main()
{

string s="abc";
vector<string> ans = permutations(s);
for (auto &&i : ans)
{
    cout<<i<<endl;
}



return 0;
}