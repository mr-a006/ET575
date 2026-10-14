#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    for(int i=0; i<10; ++i) {   //  i           :   0   1   2   3   4
        if(i == 4) {            //  condition   :   T   T   T   T   T       
            break;              //  break       :                   B (exit)
        }
        cout << i << " ";      //  print       :   0   1   2   3 
    }

    cout << "\n";
    return 0;
}