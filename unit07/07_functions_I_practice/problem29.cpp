#include <iostream>
#include <cmath>
using namespace std;

void printDigitFactors(int n) {
    int backup = n;
    while(n != 0) {
        int digit = n%10;
        if(backup%digit == 0) { cout << digit << "\n";}
        n = n / 10;
    }
}

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

    printDigitFactors(642);

    cout << "\n";
    return 0;
}