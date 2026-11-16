#include <iostream>
using namespace std;

int main( ) {
    cout << endl;

    int matrix[2][3];                     // 2x3 array

    matrix[0][0] = 5;                     // 0 0  
    matrix[0][1] = 8;                     // 0 1
    matrix[0][2] = 2;                     // 0 2

    matrix[1][0] = 7;                     // 1 0
    matrix[1][1] = 0;                     // 1 1
    matrix[1][2] = 1;                     // 1 2

    for(int i=0; i<2; i++) {              // Iterate through rows
        for(int j=0; j<3; j++) {          // Iterate through columns
            cout << matrix[i][j] << " ";  // Print every i,j value
        }
        cout << "\n";                     // newline require to print 2D matrix image
    }

    cout << endl;
    return 0;
}
