#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "\n";

    // indexes: 01234
    string s = "Hello"; 

    cout << s.size() << "\n\n";     // Print the number of characters in s

    cout << s[0] << "\n";           // Print one character at a time by index
    cout << s[1] << "\n";
    cout << s[2] << "\n";
    cout << s[3] << "\n";
    cout << s[4] << "\n\n";

    s[0] = 'J';                     // Modify the first letter
    s[4] = 'y';                     // Modify the last letter 

    cout << s << "\n";

    cout << "\n";
    return 0;
}