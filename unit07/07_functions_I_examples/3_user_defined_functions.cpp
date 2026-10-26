#include <iostream>
using namespace std;

int add(int a, int b) {         // function DEFINITION (return type, name, parameter list, code block)
    return a + b;
}                               

int main() {
    cout << "\n";

    cout << add(5, 7) << "\n";  // function CALL (name, argument list)

    cout << "\n";
    return 0;
}


