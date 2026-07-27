// Task 36: Ternary operator - find greatest of three numbers
#include <iostream>
using namespace std;

int main() {
    int a, b, c, greatest;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter third number: ";
    cin >> c;

    greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    cout << "Greatest number = " << greatest << endl;

    return 0;
}
