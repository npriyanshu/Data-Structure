#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = m,j=0;i<m + n;i++,j++){
            nums1[i] = nums2[j];
        }
        sort(nums1.begin(),nums1.end());
    }
int main()
{
vector<int> nums1 = {1,2,3,0,0,0};
vector<int> nums2 = {2,5,6};
int n = 3, m = 3;
merge(nums1,m,nums2,n);
cout<<endl;
for(auto i:nums1){
    cout<<i<<" ";
}
return 0;
}