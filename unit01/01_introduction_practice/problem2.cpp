#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    cout << endl;

    string item1, price1, item2, price2, item3, price3;

    cout << "Enter first item and cost: ";
    cin >> item1 >> price1;

    cout << "Enter second item and cost: ";
    cin >> item2 >> price2;

    cout << "Enter third item and cost: ";
    cin >> item3 >> price3;

    cout << left << setw(10) << "Item" << setw(10) << "Cost" << "\n";
    cout << left << setw(10) << item1 << "$" << setw(10) << price1 << "\n";
    cout << left << setw(10) << item2 << "$" << setw(10) << price2 << "\n";
    cout << left << setw(10) << item3 << "$" << setw(10) << price3 << "\n";
    
    cout << endl;
    return 0;
}