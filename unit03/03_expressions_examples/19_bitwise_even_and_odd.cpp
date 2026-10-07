#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int x = 6;
    int y = 7;

    cout << (x % 2 == 0) << "\n";       // Is x even using modulo?
    cout << (y % 2 != 0) << "\n\n";     // Is y odd using modulo?
     
    cout << ((x & 1) == 0) << "\n";     // Is x even bitwise? 
    cout << ((y & 1)) << "\n";          // Is x odd bitwise?

    cout << "\n";
    return 0;
}