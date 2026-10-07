#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int a = 5;
    int b = ++a + 2;
    a += b;
    b = --a;
    cout << a << " " << b << endl;

    return 0;
}