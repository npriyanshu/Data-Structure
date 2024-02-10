// linear search on 2d array
#include<iostream>
using namespace std;
// must give col 
pair<int,int> isPresent(int arr[][2],int row,int col,int key)
{
for (int i = 0; i <3; i++)
{

for (int j = 0; j<4; j++)
{
if(key == arr[i][j])
return make_pair(i, j);;
}
}
return make_pair(-1, -1);;
}
int main()
{
int arr[3][2]= {{2,4},{1,3},{8,7}};
pair<int,int> ans = isPresent(arr,3,2,7); 
cout<<ans.first<<","<<ans.second<<endl;
cout<<arr[2][1];

return 0;
}