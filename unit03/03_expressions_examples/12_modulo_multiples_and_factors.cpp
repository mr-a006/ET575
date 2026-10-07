#include <iostream>
using namespace std;

int main() {
    cout << "\n";
 
    int x = 5;

    cout << (x % 5 == 0) << "\n";       // Is x a multiple of 5?
    cout << (25 % x == 0) << "\n";      // Is x a factor of 25?

    cout << (x % 5 != 0) << "\n";       // Is x NOT a multiple of 5?
    cout << (25 % x != 0) << "\n";      // Is x NOT a factor of 25?
    
    cout << (x % 2 == 0) << "\n";       // Is x even?
    cout << (x % 2 != 0) << "\n";       // Is x odd?

    cout << "\n";
    return 0;
}
