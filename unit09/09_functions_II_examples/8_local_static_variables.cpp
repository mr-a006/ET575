#include <iostream>
using namespace std;

void func() {
    static int count = 0;   // Local static variable
    ++count;
    cout << count << "\n";
}

int main( ) {                       
    cout << "\n";

    func();                 // Prints 1
    func();                 // Prints 2
    func();                 // Prints 3

    cout << "\n";
    return 0;
}
