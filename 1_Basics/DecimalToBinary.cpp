#include <iostream>
using namespace std;

int main() {
    int32_t n;

num:
    cout << "Enter a negative number: ";
    cin >> n;

    if (n >= 0) {
        cout << "Invalid Input. Please Enter a negative number" << endl;
        goto num;
    }

    // Convert to two's complement
    uint32_t positive_n = -n;  // Make n positive

    // Calculate the binary representation
    int binary[32];  // Assuming a 32-bit integer
    for (int i = 0; i < 32; i++) {
        binary[31 - i] = (positive_n >> i) & 1;
    }

    cout << "The binary of the given number is: ";
    for (int i = 0; i < 32; i++) {
        cout << binary[i];
    }
    cout << endl;

    return 0;
}
