#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    bool b = true;
    cout << b << "\n";

    b = 1000;
    cout << b << "\n";

    b = -1000;
    cout << b << "\n";

    b = 'A';
    cout << b << "\n";

    b = 0.0;                // Only zero equivalents resolve to false, all other values are true
    cout << b << "\n";

    cout << "\n";
    return 0;
}