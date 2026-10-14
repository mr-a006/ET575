#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int val = 0;

    do { // Codeblock always runs at least one time, repeats if condition is true
        cout << "Enter # (-1 to stop): ";
        cin >> val;
    } while(val != -1);

    cout << "\n";
    return 0;
}