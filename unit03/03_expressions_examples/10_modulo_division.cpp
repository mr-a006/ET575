#include <iostream>
using namespace std;

int main() {
    cout << "\n";
 
    int x=3;
                                    // modulo: return the remainder of a division operation
    cout << (0 % 3) << "\n";        // 3 goes into 0, 0 times, with 0 leftover
    cout << (1 % 3) << "\n";        // 3 goes into 1, 0 times, with 1 leftover
    cout << (2 % 3) << "\n";        // 3 goes into 2, 0 times, with 2 leftover

    cout << (3 % 3) << "\n";        // 3 goes into 3, 1 times, with 0 leftover  (multiple)           
    cout << (4 % 3) << "\n";        // 3 goes into 4, 1 times, with 1 leftover    
    cout << (5 % 3) << "\n";        // 3 goes into 5, 1 times, with 2 leftover  

    cout << (6 % 3) << "\n";        // 3 goes into 6, 2 times, with 0 leftover  (multiple)     
    cout << (7 % 3) << "\n";        // 3 goes into 7, 2 times, with 1 leftover    
    cout << (8 % 3) << "\n";        // 3 goes into 8, 2 times, with 2 leftover 

    cout << (9 % 3) << "\n";        // 3 goes into 9, 2 times, with 0 leftover  (multiple)                      
 
    cout << "\n";
    return 0;
}
