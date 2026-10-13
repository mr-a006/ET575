#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int w=1, x=2, y=3, z=4;

    cout << ( ( w < x ) && ( y > z ) ) << "\n";     // Does (y > z) need to be evaluated?
    cout << ( ( w < x ) || ( y > z ) ) << "\n";     // Does (y > z) need to be evaluated?

    cout << "\n";
    return 0;
}
