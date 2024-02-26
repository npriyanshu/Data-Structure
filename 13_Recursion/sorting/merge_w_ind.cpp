#include<iostream>
using namespace std;
void merge(int *arr, int s, int mid, int e) {
    int i = s, j = mid + 1;

    while (i <= mid && j <= e) {
        if (arr[i] <= arr[j]) {
            i++;
        } else {
            // Shift the elements to the right to make space for the current element from the second half
            int temp = arr[j];

            for (int k = j; k > i; k--) {
                arr[k] = arr[k - 1];
            }

            arr[i] = temp;

            i++;
            mid++;
            j++;
        }
    }
}

void mergeSort(int *arr, int s, int e) {
    // base case
    if (s >= e) {
        return;
    }

    int mid = s + (e - s) / 2;

    // left part sort karna hai
    mergeSort(arr, s, mid);

    // right part sort karna hai
    mergeSort(arr, mid + 1, e);

    // merge
    merge(arr, s, mid, e);
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