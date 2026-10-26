#include <iostream>
using namespace std;

void f3(int a, int b)
{
    for(int i=0; i<a; ++i) {
        for(int j=i; j<=b; ++j) {
            cout << a;
        }
    }
}

int main() {
    f3(2, 10);

    return 0;
}

// i:           HOLDER
// condition:   HOLDER
// output:      HOLDER