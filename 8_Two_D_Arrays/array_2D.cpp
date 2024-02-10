#include<iostream>
#include<vector>
using namespace std;
int main()
{
    /*
// mathmatical way to use an linear array as 2d array

int arr[9] = {2,3,5,6,76,8,9,84,23};

// for example i want to get element at 0th row 0th column

// to map that to this array formula is

// formula - no_of_total_column * row + column;

// eg : element at 1,1
int ele = 3 * 1+1;
cout<<arr[ele];

    */

// create 2D array
// int arr[row][col];
//or initialize with values
//  int arr[row][col] = {1,2,3,4,5,6,6,7,8};

// we can fully define what elements will go in what rows

//  int arr[3][4] = {{1,2,3,4}, {2,5,6,67},{3,5,7}};


// input and output 
// cin>>arr[row][col];
// cout<<arr[row][col];

int arr[3][4];
for (int i = 0; i <3; i++)
{

for (int j = 0; j<4; j++)
{
cin>>arr[i][j];
}

}

for (int i = 0; i <3; i++)
{

for (int j = 0; j<4; j++)
{
cout<<arr[i][j] << " ";
}
cout<<endl;

}





return 0;
}