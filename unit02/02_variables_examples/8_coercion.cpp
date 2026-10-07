#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int i = 'A';            // Convert 'A' to 65 then store in i 
    char c = 66;            // Convert 66 to 'B' then store in c 
    int j = 5.55;           // Convert 5.55 to 5 then store in j (data loss)

    cout << i << "\n";
    cout << c << "\n";
    cout << j << "\n\n";

    i = c;                  // c does not change (the value of c is copied, then converted to store into i)
    cout << i << "\n";
    cout << c << "\n";    

    cout << "\n";
    return 0;
}