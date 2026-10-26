#include <iostream>
using namespace std;

int add(int a, int b);          // FORWARD DECLARATION: return type, name, parameter list

int main() {
    cout << "\n";

    cout << add(5, 7) << "\n";  // CALL

    cout << "\n";
    return 0;
}

int add(int a, int b) {         // DEFINITION: return type, name, parameter list and body
    return a + b; 
}
