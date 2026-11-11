#include <iostream>
using namespace std;

void print(const int &a)    // const int &a = x
{
    //++a;                  // Compiler error: a cannot be modified
    cout << a << "\n";
}

int main( ) {
    cout << "\n";

    int x=1;

    ++x;                    // Modify x
    print(x);               

    cout << "\n";
    return 0;
}
