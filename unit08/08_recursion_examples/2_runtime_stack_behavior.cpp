#include <iostream>
using namespace std;

void f3(int c)          // f3 is the first function to end
{
    cout << c << "\n";  
}
void f2(int b)          // f2 waits for f3
{
    f3(b);              
}
void f1(int a)          // f1 waits for f2
{
    f2(a);              
}

int main( ) {
    cout << "\n";
                     
    f1(10);              // main calls f1, which calls f2, which calls f3, all functions exit in reverse order

    cout << "\n";
    return 0;
}
