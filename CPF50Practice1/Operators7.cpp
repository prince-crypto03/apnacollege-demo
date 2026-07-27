// Task 32: Bitwise AND, OR, XOR, NOT
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first integer: ";
    cin >> a;

    cout << "Enter second integer: ";
    cin >> b;

    cout << "a & b  (AND)  = " << (a & b) << endl;
    cout << "a | b  (OR)   = " << (a | b) << endl;
    cout << "a ^ b  (XOR)  = " << (a ^ b) << endl;
    cout << "~a     (NOT)  = " << (~a) << endl;

    return 0;
}
