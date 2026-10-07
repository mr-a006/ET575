#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout << std::fixed;
    cout << std::setprecision(4);

    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << ( static_cast<float>(x/y) ) << endl;
    cout << ( x/y ) << endl;

    return 0;
}