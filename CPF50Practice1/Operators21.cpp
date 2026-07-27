// Task 46: Check if two numbers have opposite signs
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // XOR of signs: different signs give negative, same signs give positive
    if ((a ^ b) < 0) {
        cout << "Numbers have opposite signs" << endl;
    } else {
        cout << "Numbers have same sign (both positive or both negative)" << endl;
    }

    return 0;
}
