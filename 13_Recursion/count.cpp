#include<iostream>
using namespace std;

void countBack(int n){
    if(n == 0) return;

    cout<<n<<" ";
    countBack(n-1);
}

void countFor(int n){
    if(n == 0) return;

    countFor(n-1);

    cout<<n<<" ";
}
int main()
{

int n;
cout<<"enter the no :";
cin>>n;
countBack(n);
cout<<endl;
countFor(n);
cout<<endl;

return 0;
}