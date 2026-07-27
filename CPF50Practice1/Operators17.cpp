// Task 42: Check odd/even using bitwise operator
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // If last bit is 1, number is odd. If last bit is 0, number is even.
    if ((num & 1) == 1) {
        cout << num << " is Odd" << endl;
    } else {
        cout << num << " is Even" << endl;
    }

    return 0;
}
