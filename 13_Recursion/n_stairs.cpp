#include<iostream>
using namespace std;
int countDistinctWays(int nStairs) {
 if(nStairs <0) return 0;

 if(nStairs==0) return 1;

// recursive relation
return countDistinctWays(nStairs -1 ) + countDistinctWays(nStairs -2 );

}
int main()
{

cout<<countDistinctWays(6); // number of ways to climb a staircase with 6 steps.


return 0;
}