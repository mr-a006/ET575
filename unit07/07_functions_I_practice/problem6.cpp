#include <iostream>
using namespace std;

void f1(int a, int b)
{
    for(int i=1; i<=b; ++i) {
        cout << a;
    }
}

int main() {
    f1(1, 3);

    return 0;
}

// i:           1 2 3 4
// condition:   T T T F
// output:      1 1 1