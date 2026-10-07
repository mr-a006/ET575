#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout << std::fixed;
    cout << std::setprecision(4);

    float x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << ( (x/y) ) << endl;
    cout << ( static_cast<int>(x)/static_cast<int>(y) ) << endl;

    return 0;
}