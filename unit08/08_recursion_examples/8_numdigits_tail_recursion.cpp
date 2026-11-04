#include <iostream>
using namespace std;

// numDigits(5432)
//  numDigits(543)
//    numDigits(54)
//      numDigits(5) return 1                       // problem is solved as the functions return
//    numDigits(54) return 1 + 1
//  numDigits(543) return 1 + 2
// numDigits(5432) return 1 + 3
int numDigits(long n) 
{
    if(n<10) {
        return 1;
    }
    return 1 + numDigits(n/10);
}

// numDigits(5432,0) 0+1
//  numDigits(543,1) 1+1
//    numDigits(54,2) 2+1
//      numDigits(5,3) return 3+1                   // problem is solved by the time we reach the base case
//    numDigits(54,2) return 4
//  numDigits(543,1) return 4
// numDigits(5432,0) return 4
int numDigitsTail(long n, int d=0)                  // d has a default argument value of 0 
{
    if(n<10) {
        return d+1;
    }
    return numDigitsTail(n/10, d+1);
}

int numDigitsTailOptimization(long n)      // compiler generated iterative equivalent using goto 
{
    int d=0;
    start:              // label
    if(n<10) {          // if one digit left add one more digit and return the answer
        return d+1;       
    }
    n/=10;              // remove least significant digit
    d+=1;               // increment digit counter
    goto start;         // jump back to start label (loop)
}

int main( ) {
    cout << "\n";

    long n = 3654562;
    cout << numDigits(n) << "\n";

    cout << numDigitsTail(n) << "\n";     // 2nd argument not needed
    cout << numDigitsTail(n, 0) << "\n";

    cout << numDigitsTailOptimization(n) << "\n";

    cout << "\n";
    return 0;
}
