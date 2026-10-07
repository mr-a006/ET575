#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    const double NYC_TAX_RATE = .08875;     // Compile time constant
    constexpr double NYS_TAX_RATE = .04;    // Run time constant (more efficient)

    // NYC_TAX_RATE = .088888;              // Compiler error: Can not modify a constant
    // NYS_TAX_RATE = .05;                  // Compiler error: Can not modify a constant expression

    cout << "\n";
    return 0;
}

