#include <iostream>
#include <ctime>                           // Required for time function
using namespace std;

int main() {
    cout << "\n";
 
    srand( time(0) );                       // Time based seed

                                            // Use modulo to specify the range of psuedorandom values
    cout << ( rand() % 10 ) << "\n";        // Random value between 0 and 9 inclusive  
    cout << ( rand() % 100 ) << "\n";       // Random value between 0 and 99 inclusive       
    cout << ( rand() % 1000 ) << "\n";      // Random value between 0 and 999 inclusive                 
                      
    cout << "\n";
    return 0;
}
