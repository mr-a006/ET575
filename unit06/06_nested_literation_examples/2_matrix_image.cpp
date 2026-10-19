#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    cout << "3 rows x 5 columns: \n\n";

    for(int i=0; i<3; ++i) {        // i    :   0       1       2
        for(int j=0; j<5; ++j) {    // j    :   01234   01234   01234
            cout << "* ";           //          *****   *****   *****  
        }
        cout << "\n";               // Next row
    }

    cout << "\n";
    return 0;
}