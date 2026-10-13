#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int w=1, x=2, y=3, z=4;

    cout << ( ( w < x ) && ( y > z ) ) << "\n";     // original  
    //  !(( w < x ) && ( y > z ))
    //  !( w < x ) || !( y > z )
    //  ( w >= x ) || ( y <= z )
    cout << ( ( w >= x ) || ( y <=z ) ) << "\n";    // negated


    cout << ( ( w < x ) || ( y > z ) ) << "\n";     // original
    //  !(( w < x ) || ( y > z ))
    //  !( w < x ) && !( y > z )
    //  ( w >= x ) || ( y <= z )
    cout << ( ( w >= x ) && ( y <= z ) ) << "\n";   // negated

    cout << "\n";
    return 0;
}
