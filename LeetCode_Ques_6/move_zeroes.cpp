#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
        int i = 0,j=i,n=nums.size();
        while(j<n){
       if(nums[j]!=0){
        swap(nums[i],nums[j]);
        i++;    
       }

       j++;
        }
    }
int main()
{
vector<int> v ={2,1,0,3,0,4,0,0};



return 0;
}