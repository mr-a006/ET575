#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    string str = "5013962";			        // String of numbers
    int n = str.length();			        // Set N to str length

    cout << str << "\n";

    for (int i=0; i<n-1; ++i) {		        // Loop through the string
        for (int j=0; j<n-i-1; ++j) {	    // Loop one less every time
            if ( str[j] > str[j+1] ) {   	// Is current > next value?
                char temp = str[j];		    // swap current and next values
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }

    cout << str << "\n";

    cout << "\n";
    return 0;
}