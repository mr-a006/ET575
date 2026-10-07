#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "\n";
                                                 
    string s1 = "5";
    string s2 = "5.05";
    string s3 = "A";

    int i = stoi(s1);                           // Convert to integer   
    float f = stof(s2);                         // Convert to float

    cout << i << " " << f << "\n";

    cout << "\n";
    return 0;
}