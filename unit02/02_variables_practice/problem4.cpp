#include <iostream>
using namespace std;

int main() {
    double d = 5.3;             // d == 5.3
    bool b = 0;                 // b == false
    int x = b = (5 + 1) + d;    // b == true
    cout << x << "\n";          //
    return 0;
}