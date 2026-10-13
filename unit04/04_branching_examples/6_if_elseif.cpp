#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int x;
    cout << "Enter x: ";
    cin >> x;

    if(x > 0) {                             // if first condition is true, run the first code block, then exit
        cout << x << " is positive.\n";
    } else if(x < 0) {                      // otherwise, run the second code block, then exit
        cout << x << " is negative.\n";     
    }

    cout << "\n";
    return 0;
}
