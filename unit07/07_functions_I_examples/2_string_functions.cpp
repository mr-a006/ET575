#include <iostream>
#include <string>                                   // should be included when using string functions
using namespace std;

int main() {
    cout << "\n";

    string s = "Queensborough";
    cout << s << "\n";

    cout << s << "\n";                              // substr is a non-destructive function
    cout << s.substr(0, 6) << "\n";                 // return the first 6 characters of the string
    cout << s << "\n";
                                                    // destructive functions (s is modified)
    cout << s.append(" Community College") << "\n"; // add data at the end
    cout << s.erase(0, 6) << "\n";                  // erase 6 characters starting at index 0
    cout << s.insert(0, "Kings") << "\n";           // insert "Kings" at index 0
    cout << s.replace(0, 12, "Queens") << "\n\n";   // replace 12 characters starting at index 0 with "Queens"
   
    cout << s.find('C') << "\n";                    // return the index of the first instance of 'C'

    cout << "\n";
    return 0;
}
