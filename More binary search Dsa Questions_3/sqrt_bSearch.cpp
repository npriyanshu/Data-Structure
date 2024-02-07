// sqrt using binary search
// input = no 
// output = sqrt of no

#include<iostream>
using namespace std;

long long int getSqrtInt(int num){
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

double morePrecision(int n,int precision, int tempSol){
double factor = 1;
double ans = tempSol;
for(int i=0; i<precision;i++){
    factor = factor/10;
    for(double j=ans;j*j<n;j=j+factor)
    {
        ans = j;
    }
}
return ans;
}

int main()
{

int num;
cout<<"enter the number :";
cin>>num;
int tempSol = getSqrtInt(num);
cout<<"ans is :"<<morePrecision(num,3,tempSol);

return 0;
}

