#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int x;
    cout << "Enter an integer: ";
    cin >> x;
    int digit, original = x;

    digit = x%10;
    cout << ( original%digit == 0 ) << endl;
    x = x / 10;

    digit = x%10;
    cout << ( original%digit == 0 ) << endl;
    x = x / 10;

    digit = x%10;
    cout << ( original%digit == 0 ) << endl;
    // x = x / 10;

    return 0;
}