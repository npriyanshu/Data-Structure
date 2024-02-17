#include<iostream>
using namespace std;
int power (int n){
    // base case
    if(n==0){
        return 1;
    }

    // recursive relation
    int smallerProb = power(n-1);
    int biggerProblem = 2 * smallerProb;

    // return 2 * power(n-1)

    return biggerProblem;
}
int main()
{
 int n;
    cout<<"enter the value of n :";
    cin>>n;
cout<<power(n);




return 0;
}