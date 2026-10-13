#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int x;
    cout << "Enter x: ";
    cin >> x;
   
    if(x > 0) {                         // If condition is true, run the code block, otherwise skip
        cout << x << " is positive.\n";
    }

    if(x == 0) {                         // If condition is true, run the code block, otherwise skip
        cout << x << " is zero.\n";
    }  

    if(x < 0) {                         // If condition is true, run the code block, otherwise skip
        cout << x << " is negative.\n";
    }    

    cout << "\n";
    return 0;
}
