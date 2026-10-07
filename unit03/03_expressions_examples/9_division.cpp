#include <iostream>
using namespace std;

int main() {
    cout << "\n";
 
    int x=10,y=3;
    cout << ( x / y ) << "\n";      // Integer division         ( int / int )

    double f=10.0, d=3.0;
    cout << ( f / d ) << "\n";    // Floating point division ( double / int or int / double or double / double )
    cout << ( x / d ) << "\n";      
    cout << ( f / y ) << "\n";      
 
    cout << "\n";
    return 0;
}
