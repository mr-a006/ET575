#include <iostream>
using namespace std;

int main() {
    cout << "\n";
 
    int x;
    cout << "Enter a postive integer: ";
    cin >> x;
         
    srand(x);                               // Seed value changes the psuedorandom sequence                   
                           
    cout << rand() << "\n";                 // pseudorandom sequence (based upon the seed value)
    cout << rand() << "\n";
    cout << rand() << "\n";
    cout << rand() << "\n";
    cout << rand() << "\n";               
                      
    cout << "\n";
    return 0;
}
