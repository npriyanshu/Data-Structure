#include<iostream>
#include<vector>
using namespace std;
void swap(int first, int second)
{
    int temp = first;
    first = second;
    second = temp;
}
void selectionSort(vector<int> arr,int n){

for(int i =0;i<n-1;i++){
    int minIndex = i;
    for(int j = i+1;j<n;j++){
       if(arr[j]>arr[minIndex]){
           minIndex = j;
       }
    }
    swap(arr[minIndex],arr[i]);
}

}
int main()
{
vector<int> arr = {1,3,5,2,7,4,6};

selectionSort(arr,arr.size());
for (int el : arr)
{
    cout<<el<<endl;
}


return 0;
}

