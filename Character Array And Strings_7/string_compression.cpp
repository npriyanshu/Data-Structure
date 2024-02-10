#include<iostream>
#include<vector>
using namespace std;

int compress(vector<char>& chars) {
         int i=0;
        int ansIndex=0;
        int n=chars.size();

        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            //yaha tb ayenge jb vector poora traverse krliya
            //ya fir new/diff char encounter kiya h


            //oldChar store karlo
            chars[ansIndex++]=chars[i];
            int count=j-i;
            if(count>1){

                //converting counting into single digit and saving answer
                string cnt=to_string(count);
                for(char ch:cnt){
                    chars[ansIndex++]= ch;
                }
            }
            //moving to new char
            i=j;
        }
        return ansIndex;
    }
int main()
{
vector<char> chars = {'a','b','b','b','b','b','b','b','b','b','b','b','b','b','b','c','c','c'};
compress(chars);
int endInd = chars.size()-1;
for(int i=chars.size()-1;i>0;i--){
char ch= chars[i];
if(!(ch>='a' && ch<='z')){
endInd = i;
break;
}
}
chars.erase(chars.begin()+endInd+1,chars.end());
for (auto &&i : chars)
{
    cout<<i<<" ";
}



return 0;
}