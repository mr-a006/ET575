#include <iostream>
using namespace std;

int find(string s, char c);

int main() {
    string s = "Queensborough";
    cout << find(s, 'z') << "\n";
    return 0;
}

int find(string s, char c) {
    for(int i=0; i<s.size(); ++i) {
        if(s[i] == c) {
            return i;
        }
    }
    return -1;
}