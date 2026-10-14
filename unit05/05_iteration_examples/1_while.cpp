#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int count = 0;                  // initialize count

    while( count < 5 ) {            //  condition   :   T   T   T   T   T   F         
        cout << count << " ";       //  print       :   0   1   2   3   4
        ++count;                    //  ++count     :   1   2   3   4   5
    }

    cout << "\n";
    return 0;
}