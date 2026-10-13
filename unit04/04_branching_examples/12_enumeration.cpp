#include <iostream>
using namespace std;

enum Drinks {WATER = 1, COKE = 2, NONE = 3};                // Syntatic Sugar: Easy to read names substitute values

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
        case WATER:                                         
            cout << "You purchased a Water.\n";
            break;                                            
        case COKE:                                                                   
            cout << "You purchased a Coke.\n";
            break;                                      
        case NONE:                                                                                 
            cout << "You did not purchase anything.\n";
            break;                                      
        default:                                        
            cout << "Invalid option.\n";
    }

    cout << "\n";
    return 0;
}
