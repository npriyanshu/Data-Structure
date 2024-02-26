#include<iostream>
#include<vector>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s+1; i <=e; i++)
    {
      if(arr[i]<= pivot) {
        cnt++;
      }
    }

    // place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex],arr[s]);

    // left and right wala part smbhal lete h
    // left part should be less than pivot and right 
    // should be greater
    int i = s,j = e;
    while(i<pivotIndex && j>pivotIndex){

     while(arr[i]<=pivot){
        i++;
     }
     while(arr[j]>pivot){
        j--;
     }

     if(i<pivotIndex && j>pivotIndex){
        swap(arr[i++],arr[j--]);
     }
    }

   return  pivotIndex;
}

void quickSort(int arr[],int s , int e)
{
// base case
if(s>=e) return;

// partion karenge
 int p = partition(arr,s,e);

 // left part sort kro
 quickSort(arr,s,p-1);

 // right part sort kro
 quickSort(arr,p+1,e);
}

int main()
{

int arr[] = {43, 12, 56, 78, 29, 5, 91, 18, 67, 38, 83, 50, 14, 72, 27, 61, 9, 34, 75, 22, 48, 65, 7, 89, 42, 19, 54, 81, 36, 93, 11, 69, 31, 76, 24, 59, 3, 97, 46, 1, 63, 88, 15, 78, 33, 71, 8, 51, 28, 94, 21, 44, 66, 13, 79, 39, 84, 53, 16, 74, 32, 67, 77, 2, 68, 37, 82, 55, 23, 49, 86, 17, 64, 91, 6, 29, 47, 12, 57, 85, 4, 99, 58, 26, 73, 41, 96, 20, 52, 87, 35, 62, 98, 10, 45, 69};
int n = 96;


quickSort(arr ,0,n-1);

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}



return 0;
}