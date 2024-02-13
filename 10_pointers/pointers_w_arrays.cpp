#include<iostream>
using namespace std;
int main()
{

int arr[10] = {1};
// arr is the address of first element in array

// address of array or first block
cout<<arr<<endl;
cout<<&arr<<endl;
cout<<*arr<<endl; // <--value at arr
*(arr+1) = 10;
cout<<*(arr+1)<<endl; // <--value at arr[1]
cout<<*(arr)+1<<endl; // <--value at arr[0]+1
cout<<*(arr+2)<<endl; // <--value at arr[2]

return 0;
}