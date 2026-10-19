#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    // >= middle row
    // i >= n/2                 n/2     i       j   
    //                          2       0       
    //                          2       1       
    //                          2       2 (T)   01234
    //                          2       3 (T)   01234  
    //                          2       4 (T)   01234           
      
    // <= backward diagnol
    // j <= i                           i       j
    //                                  0       0
    //                                  1       01    
    //                                  2       012
    //                                  3       0123
    //                                  4       01234            

    // >= forward diagnol
    // j >= n-1-i               n-1     i       j
    //                          4       0           4
    //                          4       1          34
    //                          4       2         234
    //                          4       3        1234
    //                          4       4       01234              
      
    const int n = 5;

    for(int i=0; i<n; ++i) {                        //  i   :   0       1       2       3       4   
        for(int j=0; j<n; ++j) {                    //  j   :   01234   01234   01234   01234   01234  
            if(i>=n/2 && j <= i && j >= n-1-i)      // >= middle row AND <= backward diagnol AND >= forward diagnol
                cout << "*";                        //  *   :                     *      * *    *   *    
            else                                                
                cout << "-";                        // -    :   -----   -----   -- --   - - -    ---
        }
        cout << "\n";                               //  Next row
    }

    cout << "\n";
    return 0;
}