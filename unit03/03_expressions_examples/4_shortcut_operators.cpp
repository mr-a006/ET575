#include <iostream>
using namespace std;

int main() {
    cout << "\n";
 
    int x = 10;
                                    // Shortcut operators
    cout << ( x += 6 ) << "\n";     // Addition
    cout << ( x -= 6 ) << "\n";     // Subtraction
    cout << ( x *= 6 ) << "\n";     // Multiplication
    cout << ( x /= 6 ) << "\n";     // Division
    cout << ( x %= 6 ) << "\n";     // Modulo division  
 
    cout << "\n";
    return 0;
}
