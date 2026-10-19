#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    const int n = 5;                    // Constant for the size of the square

    for(int i=0; i<n; ++i) {            //  i   :   0       1       2       3       4  
        for(int j=0; j<n; ++j) {        //  j   :   01234   01234   01234   01234   01234  
            if(i == 0 || i == n-1) {         
                cout << "*";            //          *****                           *****                                   
            } else {                    
                cout << "-";            //                  -----   -----   -----       
            }
        }
        cout << "\n";                   //  Next row
    }

    cout << "\n";
    return 0;
}