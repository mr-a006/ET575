#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    cout << "Course Description:\n";
    cout << "ET-575 is a course in procedural programming and algorithmic" << endl;
    cout << "concepts using the C++ language.\n\n";
    cout << "ET-575 Class Schedule:\n\n\n";

    cout << left << setw(10) << "Time" << setw(15) << "Location" << "\n";
    cout << left << setw(10) << "9:00 AM" << setw(15) << "Room T18" << "\n";

    return 0;
}