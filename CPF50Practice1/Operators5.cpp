// Task 30: Logical AND, OR, NOT demonstration
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first value (0 or 1): ";
    cin >> a;

    cout << "Enter second value (0 or 1): ";
    cin >> b;

    cout << boolalpha;

    cout << a << " && " << b << " = " << (a && b) << endl;
    cout << a << " || " << b << " = " << (a || b) << endl;
    cout << "!" << a << " = " << (!a) << endl;
    cout << "!" << b << " = " << (!b) << endl;

    return 0;
}
