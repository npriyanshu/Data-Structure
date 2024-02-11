// rotate matrix or image 90 degree
#include<iostream>
#include<vector>
using namespace std;

void rotateMat(vector<vector<int>>& arr,int row){


for(int i =0;i<row ;++i){
   // we have to just turn row to column 
//    first row will be first col 
//    and second row will be second second col 

    // Iterate over the columns starting from i to avoid unnecessary swaps
        for (int j = i + 1; j < row; ++j) {
            // Swap the elements across the main diagonal
            swap(arr[i][j], arr[j][i]);
        }
}
    // Now the matrix is transposed in-place
    // matrix is now:
    // {
    //    {1, 4, 7},
    //    {2, 5, 8},
    //    {3, 6, 9}
    // }

    // now we just have to reverse the order of the columns
 
    for(int i=0;i<row;i++){

        // k for front and j for back
        for(int k=0,j=row-1;k<j;k++,j--){
           swap(arr[i][k],arr[i][j]);
        }
    }

}


int main()
{
vector<vector<int>> v = {
    {1,2,3},{4,5,6},{7,8,9}
};

rotateMat(v,v.size());

for(auto i :v){
    for (auto j : i)
    {
     cout<<j<<" ";   
    }
     cout<<endl;   
    
}
return 0;
}