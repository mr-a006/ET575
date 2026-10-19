#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    // == backward diagnol
    // j == i                           i       j
    //                                  0       0
    //                                  1         1    
    //                                  2           2
    //                                  3             3
    //                                  4               4            

    // == forward diagnol
    // j == n-1-i               n-1     i       j
    //                          4       0               4
    //                          4       1             3
    //                          4       2           2
    //                          4       3         1
    //                          4       4       0          

    const int n = 5;

    for(int i=0; i<n; ++i) {            //  i   :   0       1       2       3       4   
        for(int j=0; j<n; ++j) {        //  j   :   01234   01234   01234   01234   01234   
            // == backward diagnol OR forward diagnol
            if(j == i || j == n-1-i)
                cout << "*";            //  *   :   *   *    * *      *      * *    *   *
            else                                                
                cout << "-";            //  -   :    ---    - - -   -- --   - - -    ---
        }
        cout << "\n";                   //  Next row
    }

    cout << "\n";
    return 0;
}