// Task 35: Ternary operator - find greater of two numbers
#include <iostream>
using namespace std;

int main() {
    int a, b, greater;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    greater = (a > b) ? a : b;

    cout << "Greater number = " << greater << endl;

    return 0;
}
