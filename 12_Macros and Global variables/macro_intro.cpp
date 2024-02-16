#include<iostream>
using namespace std;
// define macro
#define POW 3
#define INSTA VAL // <-- can also give another macro as value
#define VAL "Insta"

// another type of macro
// which is kind of like a function
#define AREA(l, b) (l * b)


// Multi-line Macro definition
#define ELE 1, \
            2, \
            3

// Function-like Macro definition
#define min(a, b) (((a) < (b)) ? (a) : (b))

#define  PI  3.1416
#define  CIRAREA(r) (PI*(r)*(r))

int main()
{
cout<<POW * AREA(2,5)<<endl;

cout<<INSTA;

  // Array arr[] with elements
// defined in macros
 int arr[] = { ELE };
 
    // Print elements
    cout<<"Elements of Array are:\n";
    // printf also works in cpp


 
    for (int i = 0; i < 3; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

// using macro like a function
cout<<min(4,1)<<endl;

printf("area of the circle is : %f ",CIRAREA(5));  // we can use printf also 



return 0;
}