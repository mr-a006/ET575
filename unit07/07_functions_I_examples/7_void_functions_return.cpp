#include <iostream>
using namespace std;

void printPositive(int n) {    
    if(n <= 0) { return; }      // exit before printing if not positive
    cout << n << "\n";          // execute if n is positive
}

int main() {
    cout << "\n";

    printPositive(-5    );       
    printPositive(10);      

    cout << "\n";
    return 0;
}

