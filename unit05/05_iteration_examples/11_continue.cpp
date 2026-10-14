#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    for(int i=0; i<5; ++i) {   //  i            :   0   1   2   3   4   5 (exit)
        if(i%2 == 0) {          //  condition   :   T       T       T       
            continue;           //  continue    :   C       C       C                 
        }
        cout << i << " ";       //  print       :       1       3 
    }

    cout << "\n";
    return 0;
}