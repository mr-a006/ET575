#include <iostream>
using namespace std;

void print(int a[][2], int s1, int s2)          // 2nd dimension hardcoded (must specify 2)
{
    for(int i=0; i<s1; ++i) {
        for(int j=0; j<s2; ++j) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

int main( ) {
    cout << endl;

    const int ROWS=3, COLS=2;
    int a[ROWS][COLS] = {{10,20}, {40,50}, {70,80}};

    print(a, ROWS, COLS);

    cout << endl;
    return 0;
}