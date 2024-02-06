#include<iostream>
#include<vector>
using namespace std;
void insertionSort(int n, vector<int>& arr){
   
   for(int i =1;i<n;i++){
       int temp = arr[i];
       int j = i-1;

       for (;j>=0;j--)
       {
           if(arr[j]> temp){
       arr[j+1] = arr[j];
           }
           else{
                break;
           }
       }
       arr[j+1] = temp;
   }
}
int main()
{
vector<int> arr = {2,4,1,5,3,4};
insertionSort(arr.size(),arr);

for (auto &&i : arr)
{
    cout<<i<<endl;
}



return 0;
}