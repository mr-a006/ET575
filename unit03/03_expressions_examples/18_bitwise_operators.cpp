#include <iostream>
#include <bitset>                                           // Required to print values in binary format
using namespace std;

int main() {
    cout << "\n";

    unsigned int x = 4;                                     // 0000 0100
    unsigned int y = 5;                                     // 0000 0101

    cout << x << " " << bitset<8>(x) << "\n";               // bitset<8>(x) prints the last 8 bits of x (x is a 32 bit unsigned integer) 
    cout << y << " " << bitset<8>(y) << "\n\n";    

    cout << (x & y) << " " << bitset<8>(x & y) << "\n";
    cout << (x | y) << " " << bitset<8>(x | y) << "\n";   
    cout << (x ^ y) << " " << bitset<8>(x ^ y) << "\n\n";

    cout << (x) << " " << bitset<32>(x) << "\n";            // display all 32 bits of x (since x is a 32 bit value)
    cout << (~x) << " " << bitset<32>(~x) << "\n\n";        // negation of a 32 bit integer not an 8 bit integer
    
    cout << (x >> 2) << " " << bitset<8>(x >> 2) << "\n";   // x divided by 4 (2^2)
    cout << (y << 3) << " " << bitset<8>(y << 2) << "\n";   // y multipled by 8 (2^3)

    cout << "\n";
    return 0;
}