#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    cout << "i  j" << endl << endl;

                                                // for every i, iterate j times for a total of i * j iterations
    for(int i=0; i<4; ++i) {                    // i    :   0       1       2       3
        for(int j=0; j<2; ++j) {                // j    :   0 1     0 1     0 1     0 1
            cout << i << "  " << j << endl;
        }
        cout << "\n";                           // next row
    }

    cout << "\n";
    return 0;
}
