// Task 16: Currency denomination calculator
#include <iostream>
using namespace std;

int main() {
    int amount;
    int note500, note200, note100, note50, note10;

    cout << "Enter amount in rupees: ";
    cin >> amount;

    note500 = amount / 500;
    amount = amount % 500;

    note200 = amount / 200;
    amount = amount % 200;

    note100 = amount / 100;
    amount = amount % 100;

    note50 = amount / 50;
    amount = amount % 50;

    note10 = amount / 10;

    cout << "500 rupee notes: " << note500 << endl;
    cout << "200 rupee notes: " << note200 << endl;
    cout << "100 rupee notes: " << note100 << endl;
    cout << "50 rupee notes: " << note50 << endl;
    cout << "10 rupee notes: " << note10 << endl;

    return 0;
}
