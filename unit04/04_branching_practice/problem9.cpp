#include <iostream>
using namespace std;

int main() {
    int x,y;
	cout << "Enter two integers: ";
	cin >> x >> y;

    if(x % 2 == 0) {
        if(x % y == 0) {
            cout << x << " is an even multiple of " << y << "\n";
        }
    } else {
        if(y % x == 0) {
            cout << x << " is an odd factor of " << y << "\n";
        }
    }

    return 0;
}