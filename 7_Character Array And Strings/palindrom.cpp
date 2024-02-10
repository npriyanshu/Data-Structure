#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
int getLength (char arr[]){
    int count = 0;
    for(int i =0;arr[i]!='\0';i++){
count++;
    }
    return count;
}

bool checkPalindrome(char str[]) {
int l = getLength(str);
int i= 0,j= l-1;
bool isPalindrom = true;
while(i<=j){
    if(str[i] == ' '){
        i++;
    }
    if(str[j] == ' '){
        j--;
    }
    if(toLowerCase(str[i]) != toLowerCase(str[j])){
    isPalindrom=  false;
    return isPalindrom;
    }
    i++;
    j--;
}
return isPalindrom;
}
int main()
{
char ch[20]={'a','b',' ','b','c','b','b','a',' '};
// cout<<" Enter the character :";
// cin>>ch;

cout<<checkPalindrome(ch);


return 0;
}