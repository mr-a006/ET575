#include <iostream>
using namespace std;

void f2(int a, int b)
{
    for(int i=b; i>=a; --i) {
        if(b % i == 0) {
            if(i %2  != 0) {
                cout << i;
            }
        }
    }
}

int main() {
    f2(2, 10);

    return 0;
}

// i:       10 9 8 7 6 5 4 3 2
// true:    T          T     T
// true:               T
// print:              5