#include <iostream>
using namespace std;
int main()
{
    uint32_t n;
    int count;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << count;
}