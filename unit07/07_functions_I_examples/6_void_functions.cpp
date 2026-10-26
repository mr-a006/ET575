#include <iostream>
using namespace std;

void print(int x) {     // void function (no return type, no return value)
    cout << x << "\n";
}

int main() {
    cout << "\n";

    print(10);          

    //int x = print(10);          // compiler error:  no return to assign
    //cout << print(10) << "\n";  // compiler error: no return to print

    cout << "\n";
    return 0;
}

