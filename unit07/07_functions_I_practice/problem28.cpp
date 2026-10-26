#include <iostream>
#include <cmath>
using namespace std;

int summation(int n) {
    int sum = 0;
    for(int i=1; i<=n; ++i) {
        sum = sum + i;
    }
    return sum;
}

bool perfectSquare(int n) {
    float s = sqrt(n);
    if (static_cast<int>(s) == s) {
        return true;
    } else {
        return false;
    }
}

int main() {
    cout << "\n";

    cout << perfectSquare(25) << "\n";
    cout << summation(3) << "\n";
    cout << summation(5) << "\n";

    cout << "\n";
    return 0;
}