#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int i = 5;                   
    cout << i << "\n";            // Value of i
    cout << &i << "\n";           // Address of i
    cout << sizeof(i) << "\n\n";  // Size of i

    int *p = &i;                   // P points to i

    cout << p << "\n";            // Value of p
    cout << *p << "\n";           // Value of i (Dereference p)
    cout << sizeof(p) << "\n";    // Size of p

    cout << "\n";
    return 0;
}
