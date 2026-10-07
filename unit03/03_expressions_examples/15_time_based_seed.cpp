#include <iostream>
#include <ctime>                // Required for a time based seed
using namespace std;

int main() {
    cout << "\n";
                         
    srand( time(0) );           // Seed value based off of the the number of seconds since 00:00 hours 01/01/1970        
        
    cout << rand() << "\n";     // Pseudorandom sequence (values based upon the time function)
    cout << rand() << "\n";
    cout << rand() << "\n";
    cout << rand() << "\n";
    cout << rand() << "\n";               
                      
    cout << "\n";
    return 0;
}
