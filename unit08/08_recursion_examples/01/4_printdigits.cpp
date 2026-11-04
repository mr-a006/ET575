#include <iostream>
using namespace std;

// this function prints as it returns
//
// printDigits(2345)
//  printDigits(234)
//    printDigits(23)
//      printDigits(2)  print 2
//    printDigits(23) print 3
//  printDigits(234) print 4
// printDigits(2345) print 5
void printDigits(long long n) 
{
    if(n<10) {                  // base case: (one digit left)
        cout << n << " ";       // print the last digit
        return;                 // end recursion
    }
                                // recursive task
    cout << n%10 << " ";        // print the last digit
    printDigits(n/10);          // reduce problem by removing last digit
}

int main( ) {
    cout << "\n";

    printDigits(2345);          // print digits forward order

    cout << "\n";
    return 0;
}