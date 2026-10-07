#include <iostream>
#include <string>                    
using namespace std;                

int main() { 
    cout << endl;                       

    string first, last;                                // declare a string variable (allocate memory)

    cout << "Enter your name: ";                // request data from the console
    cin >> first >> last;                                // store input data into the variable name (what happens if you enter two names?)

    cout << "Your name is " << first << " " << last << endl;    // print the value of name
    
    cout << endl;  
    return 0;                       
}