// Task 29: Relational operators comparison
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << boolalpha;  // prints true/false instead of 1/0

    cout << a << " == " << b << " : " << (a == b) << endl;
    cout << a << " != " << b << " : " << (a != b) << endl;
    cout << a << " > " << b << " : " << (a > b) << endl;
    cout << a << " < " << b << " : " << (a < b) << endl;
    cout << a << " >= " << b << " : " << (a >= b) << endl;
    cout << a << " <= " << b << " : " << (a <= b) << endl;

    return 0;
}
