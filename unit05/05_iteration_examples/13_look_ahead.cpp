#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    //            0123
    string str = "oops";

    for(int i=0; i<str.size()-1; ++i) {         // i            :   0   1   2   3 (exit)          
        if(str[i] == str[i+1]) {                // condition    :   T   F   F
            cout << "Duplicate found" << "\n";  // print        :   D
        }
    }

    cout << "\n";
    return 0;
}