#include <iostream>
using namespace std;

int sum(int a, int b)                   // Sum two integers
{ 
    return a+b;
}
int sum(int x)                          // Summation of an integer (overloading)
{
    int total = 0;
    for(int i=0; i<=x; ++i) 
    { 
        total += i; 
    }
    return total;
}
string sum(string s, string r)          // Sum two strings (overloading)
{
    return s+r;
}

int main() {
    cout << "\n";

    cout << sum(5, 10) << "\n";         // Type, count, order of arguments determine which function to call 
    cout << sum(10) << "\n";            
    cout << sum("Good","bye") << "\n";  

    cout << "\n";
    return 0;
}