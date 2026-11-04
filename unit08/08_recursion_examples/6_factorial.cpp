#include <iostream>
using namespace std;

// this function multiplies as it returns
//
// factorial(5)
//  factorial(4)
//    factorial(3)
//      factorial(2)
//        factorial(1) return 1 
//       factorial(2) return 1 * 2
//    factorial(3) return 2 * 3
//  factorial(4) return 6 * 4
// factorial(5) return 24 * 5
long long factorial(int n) {
    if(n==1) {                        // base case: 
        return 1;                     // return 1 to end recursion 
    }
                                      // recursive task:
                                      // reduce problem by subtracting 1 from n
    return factorial(n-1) * n;        // multiply return value by n
}

int main( ) {
    cout << "\n";

    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << factorial(n) << endl;

    cout << "\n";
    return 0;
}
