#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    unsigned int min = 0;           // 0 is the smallest value for an unsigned int

    cout << min << "\n";
    cout << min - 1 <<  "\n";       // Underflow: subtracting wraps to the largest value

    return 0;
}