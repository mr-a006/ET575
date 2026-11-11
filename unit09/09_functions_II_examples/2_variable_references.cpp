#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int i = 5;                    
    cout << i << "\n";            // Value of i
    cout << &i << "\n";           // Address of i
    cout << sizeof(i) << "\n\n";  // Size of i

    int &r = i;                   // Reference (alias) of i

    cout << r << "\n";            // Value of r
    cout << &r << "\n";           // Address of r
    cout << sizeof(r) << "\n";    // Size of r

    cout << "\n";
    return 0;
}
