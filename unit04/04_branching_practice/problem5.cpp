#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int x;
    cout << "Enter a three-digit number: ";
    cin >> x;
    int backup = x;

    cout << ( x%10 ) << endl;
    x = x / 10;

    cout << ( x%10 ) << endl;
    x = x / 10;

    cout << ( x%10 ) << endl;
    x = x / 10;

    cout << backup << endl;

    return 0;
}