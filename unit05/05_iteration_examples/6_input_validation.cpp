#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int score = 0;
    
    do {
        cout << "Enter score (1-10): ";
        cin >> score;
    } while(score < 1 || score > 10);

    cout << "Valid score: " << score << "\n";

    cout << "\n";
    return 0;
}