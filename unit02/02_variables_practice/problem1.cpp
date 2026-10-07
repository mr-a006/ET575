#include <iostream>
#include <string>
using namespace std;

// 1. Create appropriate variables to store your name, middle initial, age and GPA. Output the values of these variables to the console.
// string, double for problem 2-3 today
int main() {
    string name = "Aqeel";
    char middle = 'L';
    int age = 20;
    double gpa = 2.4;

    cout << (name + middle + age + gpa) << endl;

    return 0;
}