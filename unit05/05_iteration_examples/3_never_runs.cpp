#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int x = 10;

    while( x < 5 ) {                        // Condition is never true, the loop does not run       
        cout << "This is skipped" << "\n";
    }

    cout << "\n";
    return 0;
}