#include <iostream>
using namespace std;

int globalVar = 0;

void func() {
    int localVar = 5;
    static int staticVar = 10;
    {
        int blockVar = 15;
        cout << blockVar << "\n"; 
    }
    cout << localVar << "\n"; 
    cout << staticVar << "\n";
    cout << globalVar << "\n";
    // int blockVar;                    // Compiler error: Not in scope
}

int main( ) {                       
    cout << "\n";
    
    func();
    cout << globalVar << "\n";    
    //int blockVar;                     // Compiler error: Not in scope
    //int localVar = 5;                 // Compiler error: Not in scope
    //static int staticVar = 10;        // Compiler error: Not in scope

    cout << "\n";
    return 0;
}
