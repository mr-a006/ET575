#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int x = 0;
    
    do {
        cout << "Enter a value greater than 10: ";
        cin >> x;
    } while(!(x > 10));

    cout << x << " is valid" << "\n";

    cout << "\n";
    return 0;
}