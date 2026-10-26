#include <iostream>
using namespace std;

int square (int n);
int min(int a, int b);

int main() {
    cout << "\n";

    cout << square(5) << "\n";

    cout << "\n";
    return 0;
}

int square(int n) {
    return n*n;
}
int min(int a, int b){
    if(a>b)
        return b;
    else
        return a;
}