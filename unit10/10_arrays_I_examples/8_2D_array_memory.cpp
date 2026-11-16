#include <iostream>
using namespace std;

int main( ) {
    cout << endl;

    const int ROWS=2, COLS=3;                   // Constants for each dimension
    int matrix[ROWS][COLS]{{5,8,2},{7,0,1}};          

    // Formula:     address = (i * cols + j) * size
    //
    // 2D Index:    0,0     0,1     0,2     1,0     1,1     1,2
    // Value:       5       8       2       7       0       1
    // Address:     1000    1004    1008    100C    1010    1014
    for(int i=0; i<ROWS; i++) {                    
        for(int j=0; j<COLS; j++) {            
            cout << matrix[i][j] << " ";        // Print i,j value
            cout << &(matrix[i][j]) << "\n";    // Print i,j memory address (contiguous block)
        }
        cout << "\n";                           
    }

    cout << endl;
    return 0;
}
