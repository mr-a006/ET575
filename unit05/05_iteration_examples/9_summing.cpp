#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int total = 0;

    for(int i=1; i<=5; ++i) {   //  i       :   1       2       3       4       5       6  (exit)
        total += i;             //  +=      :   0+1     1+2     3+3     6+4     10+5
                                //  total   :   1       3       6       10      15
    }

    cout << total << "\n";

    cout << "\n";
    return 0;
}