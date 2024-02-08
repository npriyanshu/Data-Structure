// shift the elements of the array by the give if its out of bound then shift from arrays start
#include<iostream>
#include<vector>
using namespace std;
   void rotate(vector<int>& nums, int k) {
    vector<int> temp(nums.size());
      for(int i =0;i<nums.size();i++){
       temp[(i+k)%nums.size()] = nums[i];
      }
   
       nums = temp;

    }
int main()
{

vector<int> v={1,2,3,4,5,6};
rotate(v,3);
for (auto &&i : v)
{
    cout<<i<<' ';
}


return 0;
}