#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    // j <= i       :           i       j
    //                          0       0
    //                          1       01 
    //                          2       012  
    //                          3       0123  
    //                          4       01234       

    const int n = 5;

    for(int i=0; i<n ; ++i) {       //  i   :   0       1       2       3       4
        for(int j=0; j<=i; ++j) {   //  j   :   0       01      012     0123    01234
            cout << "*";            //          *       **      ***     ****    *****
        }
        cout << "\n";               //  Next row
    }

    cout << "\n";
    return 0;
}