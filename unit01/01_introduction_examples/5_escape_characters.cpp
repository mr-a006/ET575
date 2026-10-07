#include <iostream>                 
using namespace std;                

int main() {  
    cout << endl;                         

    cout << "Hello World" << endl;          // endl jumps to the next line
    cout << "Hello World\n";                // \n jumps to the next line
    cout << "\n\n";                         // \n\n jumps two lines

    cout << "Hello World\n";
    cout << "Hello\tWorld\n";               // Tab indents
    cout << "Hello\t\tWorld\n\n";           // Multiple tabs for multiple indents

    cout << "Print \"double quotes\" \n";   // Print " characters

    cout << endl;      
    return 0;                       
}