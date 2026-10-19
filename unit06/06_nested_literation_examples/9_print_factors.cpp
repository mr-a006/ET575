#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int n;
    cout << "Enter a value for n: ";
    cin >> n;

    cout << "\nFactors of all numbers from 1 to " << n << "\n\n";
    
                                    // if n == 6
    for(int i=1; i<=n; ++i) {       // i    :   1           2           3           4           5           6
        cout << i << " : ";
        for(int j=1; j<=i; ++j) {   // j    :   1           1 2         1 2 3       1 2 3 4     1 2 3 4 5   1 2 3 4 5 6
            if(i%j == 0) {          //          T           T T         T   T       T T   T     T       T   T T T     T            
                cout << j << " ";   //          1           1 2         1   3       1 2   4     1       5   1 2 3     6
            }
        }
        cout << "\n";  
    }

    cout << "\n";
    return 0;
}