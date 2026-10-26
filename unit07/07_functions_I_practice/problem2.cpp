#include <iostream>
using namespace std;

bool isEven(int x);
void echo(string s, int n);
int square (int n);
int min(int a, int b);

int main() {
    cout << "\n";

    cout << square(5) << "\n";
    cout << min(10,5) << "\n";
    cout << isEven(6) << "\n";
    cout << isEven(7) << "\n";
    echo("Hello", 3);
    echo("Goodbye", 5);

    cout << "\n";
    return 0;
}
void echo(string s, int n)
{
    for(int i=0; i<n; ++i) { cout << s << " "; }
}
bool isEven(int x) {
    return x%2 == 0;
}
int square(int n) {
    return n*n;
}
int min(int a, int b) {
    if(a>b)
        return b;
    else
        return a;
}