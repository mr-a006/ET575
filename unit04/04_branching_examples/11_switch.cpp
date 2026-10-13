#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int option = 0;
    cout << "Drinks\n";
    cout << "1. Water\n";
    cout << "2. Coke\n";
    cout << "3. None\n";
    cout << "Select one: ";
    cin >> option;
    cout << "\n";

    switch( option ) {                                  
        case 1:                                         // Option == 1 (if)
            cout << "You purchased a Water.\n";
            break;                                      // Break required to avoid pass-through       
        case 2:                                         // Option == 2 (else-if)                          
            cout << "You purchased a Coke.\n";
            break;                                      
        case 3:                                         // Option == 3 (else-if)                                        
            cout << "You did not purchase anything.\n";
            break;                                      
        default:                                        // Option is not 1, 2 or 3 (similar to an else)
            cout << "Invalid option.\n";
    }

    cout << "\n";
    return 0;
}
