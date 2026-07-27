// Task 17: Reverse a 3-digit number using variables (no loops)
#include <iostream>
using namespace std;

int main() {
    int num, digit1, digit2, digit3, reversed;

    cout << "Enter a 3-digit number: ";
    cin >> num;

    digit1 = num / 100;           // first digit
    digit2 = (num / 10) % 10;     // middle digit
    digit3 = num % 10;            // last digit

    reversed = digit3 * 100 + digit2 * 10 + digit1;

    cout << "Reversed number = " << reversed << endl;

    return 0;
}
