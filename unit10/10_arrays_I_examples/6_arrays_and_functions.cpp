#include <iostream>
using namespace std;

void print(int a[], int size)               // Array and size parameters
{
    for(int i=0; i<size; ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";
}
int getIndex(int a[], int size, int val)    // Search for val in the array
{
    for(int i=0; i<size; ++i) {
        if(a[i] == val) { return i;}        // current is val, return the index
    }
    return -1;                              // val not found, return -1
}

int main( ) {
    cout << endl;

    const int SIZE = 5;
    int a[SIZE] = {10,20,30,40,50};

    print(a, SIZE);                         // Pass a pointer to the array by value, and the integer size by value

    cout << getIndex(a, SIZE, 20) << "\n";  // Pass a pointer to the array by value, and the integer size by value

    cout << endl;
    return 0;
}