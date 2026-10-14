#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    string msg = "C++";

    for(int i=0; i<msg.size(); ++i) {   // i        :   0   1   2   3 (exit)
        cout << msg[i] << " ";          // print    :   C   +   +
    }

    cout << "\n";
    return 0;
}