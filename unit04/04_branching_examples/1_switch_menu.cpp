#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int option=0;

    cout << "Drinks\n";
    cout << "1. Water\n";
    cout << "2. Coke\n";
    cout << "3. None\n";
    cout << "Select one: ";
    cin >> option;
    cout << "\n";

    switch( option ) {                                  // select case based upon value of option
        case 1:                                         // option is 1
            cout << "You purchased a Water.\n";
            break;                                      // exit
        case 2:                                         // option is 2
            cout << "You purchased a Coke.\n";
            break;                                      // exit
        case 3:                                         // option is 3
            cout << "You did not purchase anything.\n";
            break;                                      // exit
        default:                                        // option is not 1, 2 or 3
            cout << "Invalid option.\n";
    }
    
    cout << "\n";
    return 0;
}
