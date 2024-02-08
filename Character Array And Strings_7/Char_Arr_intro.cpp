// introduction to character arrays 
// strings -> strings are 1D character arrays 

#include<iostream>
using namespace std;
int getLength (char arr[]){
    int count = 0;
    for(int i =0;arr[i]!='\0';i++){
count++;
    }
    return count;
}
int main()
{

// initialize character array 
char ch[10];

// taking inputs in char array
cout<<" enter ur name :";
cin>>ch;
//  null character eg
ch[2] = '\0';
// now it will only print up to 1 index
cout<<ch;

// if i gave my name of only 9 chars
// the 10 value would be a null character (ascii) value
// which tell the complier where to stop when printing the array
// or if we give our input like this eg below
// eg : priyanshu negi
// cin stops the execution whenever we give - space " ",tab \t,newline /enter 

cout<<"length :"<<getLength(ch);

return 0;
}