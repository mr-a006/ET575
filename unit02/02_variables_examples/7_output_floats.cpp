#include <iostream>
#include <iomanip>                      // required include
using namespace std;

int main() {
    cout << "\n";

    double f1 = 1.5353; 
    double f2 = 1.0000;
    cout << f1 << " " << f2 << "\n";

    cout << std::fixed;                 // Force floating point output 
    cout << f1 << " " << f2 << "\n";    

    cout << std::setprecision(2);       // Specify precision, rounds the value
    cout << f1 << " " << f2 << "\n";

    cout << std::setprecision(3);       // Modify precision
    cout << f1 << " " << f2 << "\n";        

    int i = 10;
    cout << i << "\n";                  // Integers are not affected

    cout << "\n";
    return 0;
}