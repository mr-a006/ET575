#include <iostream>
#include <cmath>
using namespace std;

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
    cout << perfectSquare(20) << "\n";

    cout << "\n";
    return 0;
}