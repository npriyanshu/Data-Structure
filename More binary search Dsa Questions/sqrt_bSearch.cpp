// sqrt using binary search
// input = no 
// output = sqrt of no

#include<iostream>
#include<vector>
using namespace std;

int getSqrt(vector<int> arr,int num){
int s = 0,e = arr.size()-1;
int ans;
while(s<=e){
int mid = s + (e-s)/2;
    if((mid * mid)== num){
        return ans = mid;
    }
    else if((mid * mid)>num){
        e = mid -1;
    }
    else if((mid * mid)<num){
        ans = mid;
        s = mid +1;
    }
}
return ans;
}

int main()
{
vector<int> arr;
int num;
cout<<"enter the number :";
cin>>num;
for(int i=0;i<num;i++){
arr.push_back(i+1);
}

cout<<"ans is :"<<getSqrt(arr,num);

return 0;
}

