#include<iostream>
using namespace std;
int main()
{
    // how to make 2d array with heap

    // as we know 
    // we use pointer to point to memory blocks in heap
    // eg : int *p = new int[size];


    // we can take each pointer as row here 

    // we use double pointer to point each row in heap
int n,m;
cout<<"enter no of rows :";
cin>>n;
cout<<"enter no of col :";
cin>>m;
// n is the no of rows or addresses
int **arr = new int*[n];

// now we have an array with n rows or pointers
// in heap 

// now we have to assign array to each element in arr 

for(int i=0;i<n;i++){
    arr[i] = new int[n]; // normal syntax 
}

// creation done

cout<<"enter the value of elemnts"<<endl;
for(int i = 0; i<n; i++){
    for(int j = 0;j<m;j++){
        cin>>arr[i][j];
    }
}

cout<<endl;
// printing the values

for(int i = 0; i<n; i++){
    for(int j = 0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
}

// memory cleanup
    for(int i = 0; i < n; i++){
        delete[] arr[i];
    }
    delete[] arr;


return 0;
}