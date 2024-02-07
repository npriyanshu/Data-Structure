#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    char ch,restart;

    start:
    cout<<"Enter the first number :"<<endl;
    cin>>n1;
    cout<<"Enter the second number :"<<endl;
    cin>>n2;
    
    choose:
    cout<<" '+' for addition"<<endl;
    cout<<" '-' for subtraction "<<endl;
    cout<<" '*' for multiplication "<<endl;
    cout<<" '/' for division \n"<<endl;
    cout<<"Enter the operator symbol :";
    cin>>ch;

    switch (ch)
    {
    case '+':
        cout<< "The ans is :"<<n1+n2<<endl;
        break;
    case '-':
        cout<< "The ans is :"<<n1-n2<<endl;
        break;
    case '*':
        cout<< "The ans is :"<<n1*n2<<endl;
        break;
    case '/':
        cout<< "The ans is :"<<n1/n2<<endl;
        break;
    
    default:
    cout<<"\n!!! Please enter the right symbol !!!\n"<<endl;
    goto choose;
        break;
    }
    restart = 'l';
    cout<<"\n Wanna keep doin it ? : y/n \n"<<endl;
    cin>>restart;

    if(restart == 'y')
      goto start;
    
    else if(restart == 'n') 
    cout<<"ended with no";

   else
   cout<<"ended with nothing";
   

  return 0;
}