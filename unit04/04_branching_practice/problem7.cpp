#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "\n";
   
    int x;
    cout << "Enter an integer: ";
    cin >> x;
   
    if(x % 5 == 0) {
        cout << x << " is a multiple of 5.\n";
    }  if(x % 3 == 0) {
        cout << x << " is a multiple of 3.\n";
    }
   
    cout << "\n";
    return 0;
}