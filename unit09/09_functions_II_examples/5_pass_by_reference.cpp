#include <iostream>
using namespace std;

void increment(int &a)              // int &a = x)
{
    ++a;
}
void swap(int &a, int &b)           // int &a=x, int &b=y)
{
    int temp = a;
    a = b;
    b = temp;
}

int main( ) {
    cout << "\n";

    int x=2, y=1;

    increment(x);                   
    cout << x << "\n";    

    swap(x, y);                     
    cout << x << " " << y << "\n";     

    //swap(5, 6);                   // Compiler error: Literals cannot be passed by reference     

    cout << "\n";
    return 0;
}
