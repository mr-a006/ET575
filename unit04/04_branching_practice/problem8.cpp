#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "\n";
   
    int x;
    cout << "Enter an integer: ";
    cin >> x;
   
    if(x % 8 == 0) {
        cout << x << " is a multiple of 8.\n";
    } else if(x % 4 == 0) {
        cout << x << " is a multiple of 4.\n";
    } else if(x % 2 == 0) {
        cout << x << " is even.\n";
    }
   
    cout << "\n";
    return 0;
}