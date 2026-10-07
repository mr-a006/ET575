#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "\n";

    // indexes: 01234
    string s = "Hello"; 

    cout << s[100] << "\n";         // Read from an out-of-bounds index (garbage)
    s[-30] = 'A';                   // Write to an out-of-bounds index (data corruption)

    //cout << s.at(100) << "\n";    // Runtime error: At function prevents out-of-bounds

    cout << "\n";
    return 0;
}