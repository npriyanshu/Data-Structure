#include<iostream>
using namespace std;
// reversing  a string using a single pointer.
void reverse(string &s,int f){
    cout<<" calling reverse :"<<s<<endl;
if(f>((s.length()-f)-1)) {
    return;
}
cout<<" f :"<<f<<" b :"<<(s.length()-f)-1<<endl;
swap(s[f],s[(s.length()-f)-1]);

reverse(s,f+1);

}
int main()
{

 int v[] = {2,4,5};   
string s = "goodisbad";

reverse(s,0);
cout<<s<<endl;








return 0;
}