// Task 2: Swap two numbers using a third variable
#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Use a temporary variable to swap values
    temp = a;
    a = b;
    b = temp;

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}
