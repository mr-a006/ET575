#include <iostream>
#include <ctime> 
using namespace std;

int main() {
    cout << "\n";
 
    srand(time(0));  
                                            // rand % n + x 
                                            // n == the number of consecutive values
                                            // n == max - min + 1 (define an INCLUSIVE range)
                                            // n == max - min - 1 (define an EXCLUSIVE range)                                            
                                            // x == the minimum value

    cout << ( rand() % 5 + 10 ) << "\n";    // Range of 0 1 2 3 4, offset by 10, becomes 10 11 12 13 14

    cout << ( rand() % 3 + 4 ) << "\n";     // Range of 0 1 2, offset by 4, becomes 4 5 6

    cout << ( rand() % 4 + -2 ) << "\n";    // Range of 0 1 2 3, offset by -2, becomes -2 -1 0 1 
                                   
    cout << "\n";
    return 0;
}
