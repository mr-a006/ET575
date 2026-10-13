#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int x;
    cout << "Enter x: ";
    cin >> x;

    if(x > 0) {                             // If condition is true, run the first code block, then exit
        cout << x << " is positive.\n";
    } else {                                // Otherwise, run the second code block, then exit
        cout << x << " is not positive.\n";     
    }

    cout << "\n";
    return 0;
}
