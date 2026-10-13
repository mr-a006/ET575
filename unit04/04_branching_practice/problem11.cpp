#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2;

    cout << a << " " << b << "\n";
    // a = 1, b = 2

    if (a <= b) {
        // a <= b is true
        b++;
    }

    cout << a << " " << b << "\n";
    // a = 1, b = 3

    if (a % b == 0) {
        // a % b == 0 is false
        a = ++b;
    } else {
        b = a++;
    }

    cout << a << " " << b << "\n";
    // a = 2, b = 1

    b *= a;

    cout << a << " " << b << "\n";
    // a = 2, b = 2

    return 0;
}