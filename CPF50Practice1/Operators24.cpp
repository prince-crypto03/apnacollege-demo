// Task 49: Toggle a specific bit
#include <iostream>
using namespace std;

int main() {
    int num, position;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter bit position to toggle (0 = rightmost bit): ";
    cin >> position;

    int result = num ^ (1 << position);

    cout << "Original number: " << num << endl;
    cout << "After toggling bit " << position << ": " << result << endl;

    return 0;
}
