#include<iostream>
#include<vector>
using namespace std;

int isPossibleSol(vector<int> arr,int n,int m,int mid){
int studentCount = 1;
int pageSum = 0;

for (int i=0;i<n;i++){
    if(pageSum + arr[i] <= mid){
      pageSum +=arr[i];
    }
    else{
        studentCount++;
        if(studentCount>m || arr[i]> mid){
            return false;
        }
        pageSum = arr[i];
    }
}
return true;
}

int main()
{
vector<int> arr={10,20,30,40};
int s = 0;
int sum =0;
int m = 2;
for(int n : arr){
    sum +=n;
}
int e = sum;
int ans= -1;
int mid = s+(e-s)/2;

while(s<=e){
    if(isPossibleSol(arr,arr.size(),m,mid)){
        ans = mid;
        e=mid-1;
    }
    else{
        s = mid+1;
    }
    mid = s+(e-s)/2;
}
cout<<ans;
return 0;
}