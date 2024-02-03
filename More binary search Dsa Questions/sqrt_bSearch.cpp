// sqrt using binary search
// input = no 
// output = sqrt of no

#include<iostream>
using namespace std;

long long int getSqrt(int num){
int s = 0,e = num;
long long int ans= -1;
while(s<=e){
long long int mid = s + (e-s)/2;
    if((mid * mid)== num){
        return mid;
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

int num;
cout<<"enter the number :";
cin>>num;
cout<<"ans is :"<<getSqrt(num);

return 0;
}

