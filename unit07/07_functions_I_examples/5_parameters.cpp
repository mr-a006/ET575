#include <iostream>
using namespace std;

int add(int a, int b) {     // two integer parameters, a and b
    return a + b; 
}

int main() {
    cout << "\n";

    int x=1, y=2;

    int a = add(5, 7);      // two integer literal arguments
    int b = add(x, y);      // two integer variable arguments

    cout << a << "\n";
    cout << b << "\n";

    //int c = add();          // compiler error: number of arguments != number of parameters
    //int d = add(5,4,3);     // compiler error: number of arguments != number of parameters

    cout << "\n";
    return 0;
}

