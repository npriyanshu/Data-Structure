#include<iostream>
using namespace std;
void reverseIt(string& s,int st,int e){
    while(st<e){
    swap(s[st++],s[e--]);
}
  }
        
string reverseWords(string s) {
    int st =0,e=-1;
    int l = s.length()-1;
    
   for(int i =0;i<l+1;i++)
{
    if(s[i]==' '){
        st = e;
        e = i;
reverseIt(s,st+1,e-1);
    }

if(i ==l ){
        st = e;
        e = i;
reverseIt(s,st+1,e);
    }
}     

return s;
}
int main()
{

string s = "pinchu is me and him";
cout<<reverseWords(s);



return 0;
}