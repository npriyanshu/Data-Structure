#include<iostream>
using namespace std;

void countBack(int n){
    if(n == 0) return;

    cout<<n<<" ";
    countBack(n-1);
}
int main()
{

int n;
cin>>n;
countBack(n);

return 0;
}