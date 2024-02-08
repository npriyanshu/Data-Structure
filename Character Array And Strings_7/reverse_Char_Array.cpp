#include<iostream>
#include<vector>
using namespace std;

int getLength (char arr[]){
    int count = 0;
    for(int i =0;arr[i]!='\0';i++){
count++;
    }
    return count;
}
void reverseChar(char a[]){
int s =0;
int e = getLength(a)-1;
while(s<e){
    swap(a[s++],a[e--]);
}

}
int main()
{
char ch[20] = {'p','r','i','y','a'};
reverseChar(ch);
cout<<ch;
return 0;
}