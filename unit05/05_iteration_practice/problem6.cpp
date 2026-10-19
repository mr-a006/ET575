#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int x;
    cout << "Enter a positive integer: ";
    cin >> x;

    for(int i=1; i<=x; ++i) {
        if(x%i == 0) {
            cout << i << " ";
        }
    }

    cout << "\n";
    return 0;
}