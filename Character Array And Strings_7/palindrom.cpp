#include<iostream>
using namespace std;
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
    if(str[i] != str[j]){
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
char ch[20];
cin>>ch;
cout<<checkPalindrome(ch);


return 0;
}