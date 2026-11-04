#include <iostream>
using namespace std;

void print(int n) 
{
    cout << n << "\n";
    cout << &n << "\n";      // 2nd and 3rd variable named n share a memory address at different points in time
}

int main( ) {
    cout << "\n";

    int n = 5;
    cout << &n << "\n";     // 1st variable named n (first of three variables named n)
                          
    print(n);               // add function to stack, remove when done

    n = 6;
    print(n);               // add function to stack, remove when done

    cout << "\n";
    return 0;
}