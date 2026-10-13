#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int x;
    cout << "Enter x: ";
    cin >> x;

    if(x > 0) {                             // If first condition is true, run the first code block, then exit
        cout << x << " is positive.\n";
    } else if(x < 0) {                      // otherwise, if second condition is true, run the second code block, then exit
        cout << x << " is negative.\n";     
    } else {                                // otherwise, run the third code block
        cout << x << " is zero.\n";     
    }

    cout << "\n";
    return 0;
}
