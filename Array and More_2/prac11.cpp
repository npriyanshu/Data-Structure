// find intersection

// #include<iostream>
// using namespace std;
// int main(){
//     int a1[9] ={1,2,3,3,4,5,5,5,6};
//     int a2[5] ={2,3,5,5,6};
//     int common[6];
//     int inc=0;
//     for(int i =0;i<9;i++){
//         cout<<i<<endl;
//        for(int j =0;j<5;j++){
//         if(a1[i]<a2[j])
//           break;

//         if(a1[i]==a2[j]){
//             cout<<"matched :"<<a2[j]<<endl;
//             common[inc]=a1[i];
//             a2[j] = INT_MIN;
//             inc++;
//             break; 
//         }
//     }  
//     }
//     cout<<"common elems"<<endl;
//     for(int i =0;i<inc;i++){
//         cout<<common[i]<<endl;
//     }
//     return 0;
// }







// solution 2: using 2 pointers approach

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a1[9] ={1,2,3,3,4,5,5,5,6};
    int a2[5] ={2,3,5,5,6};
    vector <int> common;
    int i=0,j=0;

   while(i<9 && j<5){

    if(a1[i]==a2[j])
      { 
        common.push_back(a1[i]);
        i++;
        j++;
        }

       else if(a1[i]<a2[j]){
            i++;
        }
        else{
            j++;
        }

   }
   
    cout<<"common elems"<<endl;

    for(int i =0;i<common.size();i++){
        cout<<common[i]<<endl;
    }
    return 0;
}