#include <iostream>
using namespace std;

int power(int n, int e);

int main() {
    
    cout << power(2, 3) << "\n";

    return 0;
}

int power(int n, int e) {
    if(e == 0) {
        return 1;
    }
    return power(n, e-1) * n;
}