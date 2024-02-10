//Given an m x n matrix, return all elements of the matrix in spiral order.
#include<iostream>
#include<vector>
using namespace std;
   vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row*col;
     
     // indexes
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;

         
        
        while(count < total){
 


 // print starting row

  for(int ind = startingCol;count < total && ind<=endingCol;ind++){
     ans.push_back(matrix[startingRow][ind]);
     count++;
  }
  startingRow++;

 // print ending column

  for(int ind = startingRow;count < total && ind<=endingRow;ind++){
     ans.push_back(matrix[ind][endingCol]);
     count++;
  }
  endingCol--;

 // print ending row

  for(int ind = endingCol;count < total && ind>=startingCol;ind--){
     ans.push_back(matrix[endingRow][ind]);
     count++;
  }
  endingRow--;

    // print starting col

  for(int ind = endingRow;count < total && ind>=startingRow;ind--){
     ans.push_back(matrix[ind][startingCol]);
     count++;
  }
  startingCol++;
    }
    return ans;
 }
int main()
{
// approach
// print starting row
// then ending col
// then ending row
// then starting column 

vector<vector<int>> v= {{1,2,3}, {2,5,6},{3,5,7}};

vector<int> ans = spiralOrder(v);
for (auto &&i : ans)
{
    cout<<i<<" ";
}


return 0;
}