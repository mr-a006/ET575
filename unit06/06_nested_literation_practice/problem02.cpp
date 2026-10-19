#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int rows = 7;
    int cols = 20;

    for(int i=0; i<rows; ++i) {
        for(int j=0; j<cols; ++j) {
            if(i<5 && j<8) {
                cout << "* ";
            } else if (i%2 == 0) {
                cout << "= ";
            } else {
                cout << "- ";
            }
        }
        cout << "\n";
    }

    cout << "\n";
    return 0;
}
