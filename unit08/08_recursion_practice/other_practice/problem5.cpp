#include <iostream>
using namespace std;

int sumDigits(int n) {
    if(n<10) {
        return n;
    }
    int digit = n%10;
    return sumDigits(n/10) + digit;
}

int main() {

    cout << sumDigits(345) << "\n";

    return 0;
}

// answer
// sumDigits (543)
//  sumDigits  (54)
//   sumDigits   (5)   base case - return 5
//  sumDigits  (54)  return sumDigits(5) + 4 -> 5 + 4
// sumDigits  (543)  return sumDigits(54) + 3 -> 9 + 3