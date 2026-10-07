#include <iostream>
using namespace std;

struct Point {                          // User defined type
    int x;
    int y;
};

int main() {
    cout << "\n";

    Point p;                            // Create the variable p of type Point
    p.x = 10;                           // Assign x in p
    p.y = 20;                           // Assign y in p

    cout << p.x  << " " << p.y << "\n";

    cout << "\n";
    return 0;
}

