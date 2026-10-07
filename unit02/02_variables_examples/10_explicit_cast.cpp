#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int i = 0;
    char c = 'A';

    i = static_cast<int>(c);    // Copy 'A', convert to 65, store into i
    c = static_cast<char>(i);   // Copy 65, convert to 'A', store into c   

    cout << i << "\n";
    cout << c << "\n";

    cout << "\n";
    return 0;
}