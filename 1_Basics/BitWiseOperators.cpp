#include <iostream>
using namespace std;

int main() {
    int prev = 0;
    int next = 1;
    int n;
    int new_num;

    cout<<"enter the no :";
    cin>>n;
    cout<< prev<<'\t';
    cout<< next<<'\t';
    for (int i = 1;i<=n;i++){
        new_num = prev +next;
    cout<< new_num<<'\t';
        prev = next;
        next = new_num;
    }
    


    return 0;
}



    // int a = 4;
    // int b = 6;

    // cout << "a&b =" << (a & b) <<endl;  
    // cout << "a|b =" << (a | b) <<endl;  
    // cout << "~a =" << ~a <<endl;  
    // cout << "a^b =" << (a^b) <<endl;  
    // cout << "left shift =" << (21<<2) <<endl;  
    // cout << "right shift =" << (5>>1) <<endl;  
//   for(int i = 0,b = 1;i<=10;i++,b++){
//     cout<<"i :"<<i<<"\t"<<"b :"<<b<<endl;
//   }