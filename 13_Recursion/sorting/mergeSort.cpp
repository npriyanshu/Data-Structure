#include<iostream>
using namespace std;

void merge(int *arr, int s , int e){
   int mid = s + (e-s)/2;

// length of first array
   int len1 = (mid - s) +1;
//    printf(" len1 :%d, mid: %d, e: %d, s:%d",len1, mid, e ,s );
//    cout<<endl;

// length of second array
   int len2 = e - mid;
//    printf(" len2 :%d, mid: %d, e: %d, s:%d",len2, mid, e ,s );
//    cout<<endl;
//    cout<<endl;

   //make both arrays
   int *first = new int[len1];
   int *second = new int[len2];

   // copy values
   int mainArrayIndex = s;
   // first array
   for (int i =0; i<len1; i++){
    first[i] = arr[mainArrayIndex++];
   }

   // second array
   mainArrayIndex = mid+1;
   for (int i =0; i<len2; i++){
    second[i] = arr[mainArrayIndex++];
   }

   // merge 2 sorted arrays
   int index1 = 0;
   int index2 = 0;
   mainArrayIndex = s;

    while(index1 < len1 && index2 <len2){

        if(first[index1] < second[index2] ){
            arr[mainArrayIndex++] = first[index1++];
            
        }
        else{

            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < len1){
        
            arr[mainArrayIndex++] = first[index1++];
    }
    while( index2 <len2){
            arr[mainArrayIndex++] = second[index2++];

    }
    delete [] first;
    delete [] second;
}


void mergeSort(int *arr,int s,int e){
// base case
if(s>=e){
    return;
}

int mid = s + (e-s)/2;

// left part sort karna hai
mergeSort(arr,s,mid);

// right part sort karna hai
mergeSort(arr,mid+1,e);

//  merge
merge(arr,s,e);

}

int main()
{
 
 int arr[] = {43, 12, 56, 78, 29, 5, 91, 18, 67, 38, 83, 50, 14, 72, 27, 61, 9, 34, 75, 22, 48, 65, 7, 89, 42, 19, 54, 81, 36, 93, 11, 69, 31, 76, 24, 59, 3, 97, 46, 1, 63, 88, 15, 78, 33, 71, 8, 51, 28, 94, 21, 44, 66, 13, 79, 39, 84, 53, 16, 74, 32, 67, 77, 2, 68, 37, 82, 55, 23, 49, 86, 17, 64, 91, 6, 29, 47, 12, 57, 85, 4, 99, 58, 26, 73, 41, 96, 20, 52, 87, 35, 62, 98, 10, 45, 69};
 int n = 96;
mergeSort(arr,0,n-1);

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}


return 0;
}