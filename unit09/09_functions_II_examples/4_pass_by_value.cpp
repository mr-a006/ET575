#include <iostream>
using namespace std;

void increment(int a)               // a=x
{
    ++a;
}
void swap(int a, int b)             // a=x, b=y
{
    int temp = a;
    a = b;
    b = temp;
}

int main( ) {
    cout << "\n";

    int x=2, y=1;

    increment(x);   
    cout << x << "\n";              // what is the problem?

    swap(x, y);
    cout << x << " " << y << "\n";  // what is the problem?   

    cout << "\n";
    return 0;
}
