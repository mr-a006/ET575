#include <iostream>
using namespace std;

int main() {
    cout << endl;

    char str[6] = "Hello";      // Create a c-string (character array terminated by a null char '\0')

    cout << str << "\n\n";      // Print the c-string like a normal std::string

    int i = 0;                  // Iterate to '\0' to print a c-string
    while(str[i] != '\0') {
        cout << str[i];
        ++i;
    }     
    cout << "\n";   
    
    for(int i=0; i<6; ++i) {     // Iterate to the length of the string
        cout << str[i];
    }
    cout << "\n";

    cout << endl;
    return 0;
}
