#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int x = 0;
    
    while(!(x > 10)) {
        cout << "Enter a value greater than 10: ";
        cin >> x;
    }

    cout << x << " is valid" << "\n";

    cout << "\n";
    return 0;
}