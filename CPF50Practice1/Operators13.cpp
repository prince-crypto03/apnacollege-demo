// Task 38: Swap two numbers using bitwise XOR
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}
