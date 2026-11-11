#include <iostream>
using namespace std;

float add(float a, float b)
{
    return a+b;
}

int main() {
    cout << "\n";

    int x=1, y=2;
    float f=1.5, d=2.5;

    cout << add(f, d) << "\n";
    cout << add(x, y) << "\n";          // Cast x to 1.0, Cast y to 2.0
    cout << add('A', 'B') << "\n";      // Cast 'A' to 65.0, Cast 'B' to 66.0
    cout << add(true, false) << "\n";   // Cast true to 1.0, Cast false to 0.0
    
    cout << "\n";
    return 0;
}