#include<iostream>
#include<vector>
using namespace std;
int main()
{

vector<int> v1 = {1,2};
vector<int> v2 = {3,4};

float median = 0.0;

vector<int> merged(v1);
for (int i=0 ;i < v2.size(); i++){
merged.push_back(v2[i]);  //add element from vector v2 to the end of vector sum
}

int n = merged.size();

if(n&1){
    median = static_cast<float>(merged[(n/2)]);
}else{
    median = (static_cast<float>((merged[n/2]) + merged[(n-1)/2]) / 2.0);
}

cout << "Median is: " << median << endl;
return 0;
}
