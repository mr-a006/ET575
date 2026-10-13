#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int x;
    cout << "Enter x: ";
    cin >> x;

    if( x > 0 ) {
        if( x < 10 ) {                                              // Run if x is positive
            cout << x << " is a single-digit positive value.\n"; 
        } else {
            cout << x << " is a multi-digit postiive value.\n";
        }
    } else {
        if( x == 0 ) {                                              // Run if x is not positive
            cout << x << " is zero.\n";
        } else {
            cout << x << " is a negative value.\n";
        }
    }

    cout << "\n";
    return 0;
}
