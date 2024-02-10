// if given integer is equal to the power of 2 then return true ;

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n = 6;
    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);
        if (n == ans)
        {
            cout << "true" << endl;
            goto exit;
        }
    }
    cout << "false";
exit:
    return 0;
}

// 2nd method

// int main(){
//     int n = 16;
//     int ans =1;
//     for (int i=0;i <=30;i++){
//         if(n == ans){
//             cout<<true<<endl;
//         }
//         if(ans < INT_MAX/10)
//          ans = ans*2;
//     }
//     cout<<false;
//     return 0;
// }