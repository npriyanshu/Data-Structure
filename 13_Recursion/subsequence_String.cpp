#include<iostream>
#include<vector>
using namespace std;

void solve(string str, string output, int index, vector<string> &ans){
    //base case

    if(index >=str.size()){
        if(output.length()>0){
            ans.push_back(output);
        }
         return;
    }

    // exclude
    solve(str,output,index+1,ans); 
    

    // include
    output.push_back(str[index]);
    solve(str,output,index+1,ans);

}

vector<string> subsequences(string str){
    vector<string> ans;
    string output = "";
    int index =0;
    solve(str,output,index,ans);
    return ans;

}
int main()
{
vector<string> s = subsequences("abc");
for (auto &&i : s)
{
   for (auto &&j : i)
   {
    cout<<j<<" ";
   }
    cout<<endl;
}

return 0;
}