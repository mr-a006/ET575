#include <iostream>
using namespace std;

int main() {
    cout << "\n";
 
    int x;
    cout << "Enter an integer: ";   
    cin >> x; 

    cout << ( x % 3 ) << "\n";          // Print a value between 0 and 2 inclusive
    cout << ( x % 5 ) << "\n";          // Print a value between 0 and 4 inclusive
    cout << ( x % 7 ) << "\n";          // Print a value between 0 and 6 inclusive
    cout << ( x % 3 + 10) << "\n";      // Print a value between 10 and 12 inclusive
    cout << ( x % 5 - 10) << "\n";      // Print a value between -10 and -6 inclusive
    cout << ( x % 7 + 10) << "\n";      // Print a value between 10 and 16 inclusive    

    cout << "\n";
    return 0;
}
