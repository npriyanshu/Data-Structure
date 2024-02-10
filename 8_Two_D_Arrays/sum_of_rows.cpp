#include<iostream>
using namespace std;
int main()
{
int arr[3][2]= {{22,14},{1,33},{8,7}};

// print sum of each rows
int largeRInd = 0; 

int largestRow =INT_MIN;
for(int i =0;i<3;i++)
{
    int sum =0;
    for(int j =0;j<2;j++){
    sum += arr[i][j];
    }
    if(largestRow<sum){
    largestRow = sum;
    largeRInd = i+1;
}
    cout<<" sum of the "<<i+1<<"st row :"<<sum<<endl;
}

cout<<"largest row :"<<largeRInd<<endl;
// print sum of each column

int largestCol = INT_MIN;
int largeCInd = 0; 

for(int i =0;i<2;i++)
{
    int sum =0;
    for(int j =0;j<3;j++){
    sum += arr[j][i];
    }
   if(largestRow<sum){
    largestCol = sum;
    largeCInd = i+1;
}
    cout<<" sum of the "<<i+1<<"st column :"<<sum<<endl;
}

cout<<"largest column :"<<largeCInd<<endl;
return 0;
}