#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int evens = 0;

    for(int i=1; i<=6; ++i) {   //  i           :   1   2   3   4   5   6   7 (exit)
        if(i%2 == 0) {          //  condition   :       T       T       T
            ++evens;            //  ++          :       1       2       3
        }
    }

    cout << evens << "\n";

    cout << "\n";
    return 0;
}