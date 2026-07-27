// Task 18: Sum of digits of a 3-digit number (no loops)
#include <iostream>
using namespace std;

int main() {
    int num, digit1, digit2, digit3, sum;

    cout << "Enter a 3-digit number: ";
    cin >> num;

    digit1 = num / 100;
    digit2 = (num / 10) % 10;
    digit3 = num % 10;

    sum = digit1 + digit2 + digit3;

    cout << "Sum of digits = " << sum << endl;

    return 0;
}
