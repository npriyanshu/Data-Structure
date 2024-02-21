#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
// base case
if(size == 0){
    return false;
}
if(arr[0] == key){
    return true;
}
else{
    // recursive call
return search(arr+1,size-1,key);
}
}
int main()
{
    int arr[] = {3,5,1,2,6};

cout<<search(arr,5,1)<<endl; // Output: 4

return 0;
}