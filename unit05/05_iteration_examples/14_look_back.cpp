#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    //            0123
    string str = "oops";

    for(int i=1; i<str.size(); ++i) {           // i            :   1   2   3   4 (exit)    
        if(str[i] == str[i-1]) {                // condition    :   T   F   F
            cout << "Duplicate found" << "\n";  // print        :   D
        }
    }

    cout << "\n";
    return 0;
}