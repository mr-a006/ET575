#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    if (a%c==0 && b%c==0) {
        cout << c << " is a common factor of " << a << " and " << b << "\n";
    } else {
        cout << c << " is NOT a common factor of " << a << " and " << b << "\n";
    }

    return 0;
}