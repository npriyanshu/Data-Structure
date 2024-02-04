// painters partition problem 
// arr -> { , , , }
// k no of painters
// which takes 1 unit of time to paint 1 unit board 
// painters can paint only continous sections
// find minimum time to paint all __ARRAY_OPERATORS

// we can solve it just like book allocation problem

#include<iostream>
#include<vector>
using namespace std;
bool isPossibleSol(vector<int> boards,int n,int m,int mid){
int painters = 1;
int boards_Sum = 0;

for (int i=0;i<n;i++){
    if(boards_Sum + boards[i] <= mid){
      boards_Sum +=boards[i];
    }
    else{
        painters++;
        if(painters>m || boards[i]> mid){
            return false;
        }
        boards_Sum = boards[i];
    }
}
return true;
}

int findLargestMinDistance(vector<int> boards, int k)
{
int s = 0;
int sum =0;
for(int n : boards){
    sum +=n;
}
int e = sum;
int ans= -1;
int mid = s+(e-s)/2;

while(s<=e){
    if(isPossibleSol(boards,boards.size(),k,mid)){
        ans = mid;
        e=mid-1;
    }
    else{
        s = mid+1;
    }
    mid = s+(e-s)/2;
}
return ans;
}
int main()
{
vector<int> arr={10,20,30,40};
cout<<findLargestMinDistance(arr,2);


return 0;
}
