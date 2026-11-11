#include <iostream>
using namespace std;

float add(float a, float b)         // Add function
{
    return a+b;
}
int add(int a, int b)               // Overloaded add function
{
    return a+b;
}

int main() {
    cout << "\n";

    int x=1, y=2;
    float f=1.5, d=2.5;

    cout << add(f, d) << "\n";      // Call the float version
    cout << add(x, y) << "\n";      // Call the integer version

    //cout << add(x, f) << "\n";    // Compiler error: Ambiguous function call, which function to call?

    cout << "\n";
    return 0;
}