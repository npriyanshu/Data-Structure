#include<iostream>
using namespace std;
void reverse(string &s,int f ,int b){
    cout<<" calling reverse :"<<s<<endl;
if(f>b) {
    return;
}
swap(s[f],s[b]);

reverse(s,f+1,b-1);

}
int main()
{

 int v[] = {2,4,5};   
string s = "whatfuck";
reverse(s,0,s.length()-1);
cout<<s<<endl;








return 0;
}