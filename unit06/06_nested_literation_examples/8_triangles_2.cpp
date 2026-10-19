#include <iostream>
using namespace std;

int main() {
    cout << "\n";

  
    // j < n-1-i    :   n       i       j
    //                  5       0       4 spaces
    //                  5       1       3 spaces
    //                  5       2       2 spaces
    //                  5       3       1 space
    //                  5       4    

    // j <= i       :           i       j
    //                          0       ssss*
    //                          1       sss**    
    //                          2       ss***
    //                          3       s****
    //                          4       *****         

    const int n = 5;

    for(int i=0; i<n ; ++i) {           //  i   :   0       1       2       3       4
        // Print spaces
        for(int j=0; j<n-1-i; ++j) {    //  j   :   1234    123     12      1       
            cout << " ";                //  Print spaces
        }
        // Print stars
        for(int j=0; j<=i; ++j) {       //  j   :   0       01      012     0123    01234
            cout << "*";                //          *       **      ***     ****    *****
        }
        cout << "\n";                   //  Next row
    }

    cout << "\n";
    return 0;
}