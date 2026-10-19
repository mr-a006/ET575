#include <iostream>
using namespace std;

void f3(int a, int b) {
	for(int i=a; i<=b; ++i) {
    	if(b % i == 0) { continue; }
    	cout << a+i;
    }
}

int main() {
    f3(2, 6);

    return 0;
}

// i:           2 3 4 5 6 7(exit)
// condition:   T T F F T
// continue:    C C     C
// print:           6 7