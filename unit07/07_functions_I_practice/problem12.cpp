#include <iostream>
using namespace std;

int main() {
    int x = 0;
    long long factorial(int n);
    
    cout << "Enter a value for x: ";
    cin >> x >> factorial;
    cout << x << factorial;

    return 0;
}

long long factorial(int n) {
    int product = 1;
    for(int i=1; i<=n; ++i) {
        cout << product << "*" << i << "\n";
        product *= i;
    }
    return product;
}