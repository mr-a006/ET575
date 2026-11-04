#include <iostream>
using namespace std;

// factorial(5)
//  factorial(4)
//    factorial(3)
//      factorial(2) return 2                               // problem is solved as the functions return
//    factorial(3) return 2 * 3
//  factorial(4) return 6 * 4
// factorial(5) return 24 * 5
long long factorial(int n) 
{
    if(n==2) {
        return 2;
    }
    return factorial(n-1) * n;
}

// factorial(5) compute 1*5
//  factorial(4) compute 5*4
//    factorial(3) compute 20*3
//      factorial(2) return 60*2                            // problem is solved by the time we reach the base case
//    factorial(3) return 120
//  factorial(4) return 120
// factorial(5) return 120
long long factorialTail(int n, long long p=1)               // p is a default argument 
{
    if(n==2) {
        return p*n;
    }
    return factorialTail(n-1, p*n);                         // computation passed onto the next function (tail recursion)
}

long long factorialTailOptimization(int n)                  // compiler generated iterative equivalent using goto  
{
    long long p=1;
    start:            // label
    if(n==2) {        // if n is 2 comput final product and return the answer
        return p*n;   
    }
    p*=n;             // multiply current n by product
    --n;              // reduce n by 1
    goto start;       // jump back to start label (loop)
}

int main() {
    cout << "\n";

    long n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << factorial(n) << "\n\n";

    cout << factorialTail(n) << "\n";                       // 2nd argument not needed
    cout << factorialTail(n,1) << "\n\n";

    cout << factorialTailOptimization(n) << "\n";

    cout << "\n";
    return 0;
}
