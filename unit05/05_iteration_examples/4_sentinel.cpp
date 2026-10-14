#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int val = 0;

    while(val != -1) {                      // Loop waits for -1 input, otherwise repeats endlessly
        cout << "Enter # (-1 to stop): ";
        cin >> val;
    }

    cout << "\n";
    return 0;
}