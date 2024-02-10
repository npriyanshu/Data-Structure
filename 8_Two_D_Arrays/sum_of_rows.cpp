#include<iostream>
using namespace std;
int main()
{
int arr[3][2]= {{2,4},{1,3},{8,7}};

// print sum of each rows

for(int i =0;i<3;i++)
{
    int sum =0;
    for(int j =0;j<2;j++){
    sum += arr[i][j];
    }
    cout<<" sum of the "<<i+1<<"st row :"<<sum<<endl;
}

return 0;
}