#include <iostream>
using namespace std;

int main() {
    int i;
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;

    i = letter;

    cout << i << "\n";

    //////////////////////////////////////////

    int x = 0;
    cout << "Enter an integer: ";
    cin >> x;

    bool x = static_cast<bool>(x);

    cout << x << endl;

    return 0;
}