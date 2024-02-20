#include<iostream>
using namespace std;
bool isSorted (int arr[],int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }else {
        cout<<arr[0]<<" "<<arr[1]<<endl;
        return isSorted(arr+1,size-1);

    }
}
int main()
{
int arr[] = {1,2,4,5,6,8,9};
cout << "Is the array sorted? :"<<isSorted(arr,7)<<endl; // Output: Is the array sorted?:1


return 0;
}