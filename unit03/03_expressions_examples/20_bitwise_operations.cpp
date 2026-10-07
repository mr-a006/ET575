#include <iostream>
#include <bitset>                               // Required to print values in binary format
using namespace std;

int main() {
    cout << "\n";

    unsigned int x = 10;                                            // 1010
    cout << x << " " << bitset<4>(x) << "\n\n";

    unsigned int mask1 = 0b1000;                                    // 8 in binary format
    cout << (x & mask1) << " " << bitset<4>(x & mask1) << "\n";     // Isolate the 4th bit

    unsigned int mask2 = 0b0001;                                    // 1 in binary format
    cout << (x | mask2) << " " << bitset<4>(x | mask2) << "\n";     // Set the 1st bit to 1

    unsigned int mask3 = 0b0010;                                    // 2 in binary format
    cout << (x ^ mask3) << " " << bitset<4>(x ^ mask3) << "\n";     // Flip the 2nd bit from 1 to 0

    unsigned int mask4 = 0b1100;                                    // 3 in binary format
    cout << (x & ~mask4) << " " << bitset<4>(x & ~mask4) << "\n";   // Clear the first two bits

    cout << "\n";
    return 0;
}